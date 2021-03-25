#include<iostream>
#include<curses.h>
#include<stdio.h>
#include<fstream>
using namespace std;
class bookshope{
public: 
    void control_panel();
    void add_book();

};
void bookshope::control_panel()
{
system("cls");
cout<<"\n\n\t\t\t\t/control panel";
cout<<"\n\n1.Add new book";
cout<<"\n2.Display books";
cout<<"\n3.check specific books";
cout<<"\n4.update book";
cout<<"\n5.delete book";
cout<<"\n6.Exit";

}
int main()
{
int choice;
bookshope b;
p:
b.control_panel();
cout<<"\n\nYour choice:";
cin>>choice;
switch(choice)
{
int x;
case 1:
do{
b.add_book();
cout<<"do you want add another book ";
cin>>x;
}while(x!='N'||x!='n');
break;
case 2:
break;
case 3:
break;
case 4:
break;
case 5:
break;
case 6:
exit(0);
default: 
cout<<"\n\nInvalid value... please try";
}
getch();
goto p;
return 0;
}
