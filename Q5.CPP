//5. Define a class Date and write a program to Display Date and initialise date object using 
//Constructors.
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class date
{
    int d;
    int m;
    int year;
    public:
    date(int x,int y, int z)
    {
        d=x;
        m=y;
        year=z;
       
    }
    date()
    {}
    void display()
    {
        cout<<"date is="<<d<<"/"<<m<<"/"<<year;
    }
};
int main()
{
    date d(2,4,2002);
    d.display();
    getch();
    return 0;
}
