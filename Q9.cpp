//9. Define a class Bill and define its member function get() to take detail of customer , 
//calculateBill() function to calculate electricity bill using below tariff :
//Upto 100 unit RS. 1.20 per unit
//From 100 to 200 unit RS. 2 per unit
//Above 200 units RS. 3 per unit.
#include<iostream>
#include<conio.h>
using namespace std;
class Bill
{
  int U;
  float r;
  public:
    void get(int x)
    {
        U=x;
    }
    calculate_bill()
    {
        if(U<=100)
        {
             cout<<"unit is="<<U<<endl;
             cout<<"per unit is=1.20 Rs "<<endl;
             r=U*1.20;
             cout<<"than your electricity bill is="<<r<<endl;
        }
           else
           {
               if(U<=200)
               {
                 cout<<"unit is="<<U<<endl;
                 cout<<"per unit is=2 Rs "<<endl;
                 r=U*2;
                 cout<<"than your electricity bill is="<<r<<endl;  
               }
            
               else
                {
                    cout<<"unit is="<<U<<endl;
                   cout<<"per unit is=3 Rs "<<endl;
                    r=U*3;
                   cout<<"than your electricity bill is="<<r<<endl;
                }
           }

    }
};
 int main()
 {
     Bill b;
     int x;
     cout<<"enter your unit=";
     cin>>x;
     b.get(x);
     b.calculate_bill();
     getch();
     return 0;
 }
