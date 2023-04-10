//10. Define a class StaticCount and create a static variable. Increment this variable in a 
//function and call this 3 times and display the result.
#include<conio.h>
#include<iostream>
using namespace std;
class staticCount
{
   int static x;
   public:
   void get(int y)
   {
       x=y;
   }
    void Increment()
   {
       x++;
   }
    void display()
   {
       cout<<"increment is 3 time than value is="<<x<<endl;
   }
};
int staticCount::x=10;
   int main()
   {
       staticCount s;
       int x=10;
       s.get(x);
       s.Increment();
       s.Increment();
       s.Increment();
       s.display();
       getch();
       return 0;
   }