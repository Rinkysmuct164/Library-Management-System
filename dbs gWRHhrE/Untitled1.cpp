#include <iostream>
#include <queue>
using namespace std;

struct process
{
    int processID;
    process(int id): processID(id) {}
};

struct semaphore
{
    int value;
    std::queue<process> q;
    semaphore(int initialValue): value(initialValue) {}
};

void sleep ()
{
    cout << "Process is sleeping (Blocked)" << endl;
}

void wakeup(process p)
{
    cout << "Waking up process with ID " << p.processID << endl;
}

void P(semaphore &s, process &currentProcess)
{
    if (s.value > 0)
    {
        s.value--;
        cout << "Process " << currentProcess.processID << " acquired the semaphore. Semaphore value: " << s.value << endl;
    }
    else
    {
        s.q.push(currentProcess);
        cout << "Process " << currentProcess.processID << " is blocked and added to the queue" << endl;
        sleep();
    }
}

void V(semaphore &s)
{
    if (s.q.empty())
    {
        s.value++;
        cout << "Semaphore is released. Semaphore value: " << s.value << endl;
    }
    else
    {
        process p = s.q.front();
        s.q.pop();
        wakeup(p);
    }
}

int main()
{
    semaphore s(2);  // Initial semaphore value is 2 (can allow 2 processes to enter the critical section)
    process p1(1);
    process p2(2);
    process p3(3);
    process p4(4); // An additional process to test the queue functionality

    cout << "Process 1 tries to enter the critical section" << endl;
    P(s, p1);

    cout << "Process 2 tries to enter the critical section" << endl;
    P(s, p2);

    cout << "Process 3 tries to enter the critical section" << endl;
    P(s, p3);  // This should be blocked and added to the queue.

    cout << "Process 4 tries to enter the critical section" << endl;
    P(s, p4);  // This should also be blocked and added to the queue.

    cout << "Process 1 leaves the critical section" << endl;
    V(s);  // Should wake up Process 3

    cout << "Process 2 leaves the critical section" << endl;
    V(s);  // Should wake up Process 4

    cout << "Process 3 leaves the critical section" << endl;
    V(s);

    cout << "Process 4 leaves the critical section" << endl;
    V(s);

    return 0;
}
