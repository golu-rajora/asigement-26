//1. Define a class Complex to represent a complex number with instance variables a and b 
//to store real and imaginary parts. Also define following member functions
//a. void setData(int,int)
//b. void showData()
//c. Complex add(Complex)
#include<iostream>
#include<conio.h>
using namespace std;
class complex 
{
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }   
     complex add(complex c)
    {
        complex d;
        d.a=a+c.a;
        d.b=b+c.b;
        return d;
    }  
};
int main()
{
    complex c1,c2,c3;
    int x,y;
    cout<<"enter first complex number:-";
    cin>>x>>y;
    c1.setdata(x,y);
    c1.showdata();
    cout<<"enter second complex number:-";
    cin>>x>>y;
    c2.setdata(x,y);
    c2.showdata();
    c3=c1.add(c2);
    c3.showdata();
    getch();
    return 0;

}
