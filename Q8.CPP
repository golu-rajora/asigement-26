//8. Define a class Bank and define member functions to read principal , rate of interest and 
//year. Another member functions to calculate simple interest and display it. Initialise all details 
//using constructor.
#include<iostream>
#include<conio.h>
using namespace std;
class Bank
{
    float r;
    int y;
    int p;
    int s;
    public:
    Bank(int a,int b)
    {
        principal();
          r=a;
          y=b;
          simple_interest();
          dispaly();
    }
     Bank()
     {

     }
      void principal()
      {
         p=100000;
         cout<<"real ammount is="<<p<<endl; 
      }
      void simple_interest()
      {
         s=p*r*y/100;
      }
      void dispaly()
      {
          cout<<"rate of interest is="<<r<<endl;
          cout<<"time is="<<y<<"year"<<endl;
          cout<<"simple interest is="<<s<<endl;
      }
      
};
int main()
{
    Bank b1(2,2);
      getch();
    return 0;

}

