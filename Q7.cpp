//7. Define a class Box and write a program to enter length, breadth and height and initialise 
//objects using constructor also define member functions to calculate volume of the box.
#include<iostream>
#include<conio.h>
using namespace std;
class BOX 
{
    int length;
    int breadth;
    int height;
    int v;
    public:
     BOX (int x,int y,int z)
    {
        length=x;
        breadth=y;
        height=z;
        v=length*breadth*height;
        cout<<"box volume is="<<v;
    }
};
int main()
{
    int x,y,z;
    cout<<"enter length , breadth and height of the box:-";
    cin>>x>>y>>z;
    BOX B1(x,y,z);
    getch();
    return 0;
}

