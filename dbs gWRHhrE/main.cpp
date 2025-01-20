#include <iostream>
#include <queue>
#include <mutex>
#include <thread>
#include <vector>
using namespace std;

struct process
{
    int processID;
    process(int id): processID(id) {}

};
struct semaphore
{
    int value;
std:queue<process>q;
    semaphore(int initialValue): value(initialValue) {}

};

void sleep ()
{
    cout<<"Process is sleeping(Blocked)"<<endl;

}
void wakeup(process p)
{

    cout<<"Waking up process with ID"<<p.processID<<endl;

}
void P(semaphore &s, process &currentProcess)
{
    std:unique_lock<std:mutex>lock(s.mtx);
    if(s.value>0)
    {
        unique_lock<mutex>lock(s.mtx);
        s.value--;
        cout<<"process" <<currentProcess.processID<<"acquired thew semaphore"<<endl;
    }
    else
    {
        s.q.push(currentProcess);
        cout<<"Process"<< currentProcess.processID<<"is blocked and added to the queue"<<endl;
        sleep();

    }

}
void V(semaphore &s)
{
    if(s.q.empty())
    {

        s.value=1;
        cout<<"Semaphore is related & available"<< endl;

    }
    else
    {

        process p=s.q.front();
        s.q.pop();
        wakeup(p);
    }

}

int main()
{
    semaphore s(1);
    process p1 (1);
    process p2 (2);
    process p3 (3);
    cout<<"Process 1 tries to enter critical section"<<endl;
    p(s,p1);

    cout<<"Process 2 tries to enter critical section"<<endl;
    p(s,p2);


    cout<<"Process 3 tries to enter critical section"<<endl;
    p(s,p3);

    cout<<"Process 1 leaves the critical section"<<endl;
    V(s);
    cout<<"Process 2 leaves the critical section"<<endl;
    V(s);

    cout<<"Process 3 leaves the critical section"<<endl;
    V(s);


    return 0;
}
