#include<iostream>
#include<string>
#include <vector>
using namespace std;

void srart()
{
int clrscr();
 gotoxy(35,11);
cout<<"LIBRARY";
gotoxy(35,14);
cout<<"MANAGEMENT";
gotoxy(35,17);
cout<<"SYSTEM";
cout<<"\n\nDeveloper : Badan Sikder Rinky";
cout<<"\n\nEnjoy Programming with Badan Sikder Rinky";



}
void main()

{
char ch;
    start();
    do
    {
        clrscr();
        cout<<"\n\n\nMain Menu";
        cout<<"\n\n\t01.Book Issue";
        cout<<"\n\n\t02.Book Deposit";
        cout<<"\n\n\t03.Administrator Manu";
        cout<<"\n\n\t04.Exit";
        cout<<"\n\n\tPlease select Your Option(1-4)";
        ch = getch();
        switch(ch)
        {
            case'1' ;
            //bookissue();
            break;
            case'2' ;
            //bookdeposit();
            break;
            case'3' ;
            //adminmenu();
            break;
            case'4' ;
            //exit(0);
            break;
            default;
            cout<<"Ïnvalid choice , try again";
        }
    }while (ch!=4)
getch();
}

