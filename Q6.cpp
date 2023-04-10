//6. Define a class student and write a program to enter student details using constructor and 
//define member function to display all the details.
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class student
{
    int roll_no;
    char name[20];
    int marks;
    public:
     student(char c[],int x,int y)
     {
         roll_no=x;
         strcpy(name,c);
         marks=y;
     }
     void display()
     {
         cout<<"name="<<name<<" roll-no="<<roll_no<<" marks="<<marks<<endl;
     }
};
int main()
{
    int x;
    char n[20];
    int y;
    cout<<"enter student detals like-name,roll no,marks:-";
    cin>>n>>x>>y;
    student s1(n,x,y);
    s1.display();
    getch();
    return 0;
}
