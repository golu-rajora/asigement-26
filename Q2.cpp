//2. Define a class Time to represent a time with instance variables h,m and s to store hour, 
//minute and second. Also define following member functions
//a. void setTime(int,int,int)
//b. void showTime()
//c. void normalize()
//d. Time add(Time)
#include<iostream>
#include<conio.h>
using namespace std;
class time
{
   int h,m,s;
   public:
   void settime(int x,int y,int z)
   {
      h=x;
      m=y;
      s=z; 
   }
   void showtime()
   {
       cout<<h<<" "<<"hour"<<m<<" "<<"min"<<s<<" "<<"sec"<<endl;
   }
   time add(time t)
   {
       time t1;
       t1.h=h+t.h;
       t1.m=m+t.m;
       t1.s=s+t.s;
       return t1;
   }
   void normalize()
   {
       if(s>60)
      {
         m++;
       s=s-60;
      }
      if(m>60)
      {
          h++;
          m=m-60;
      }
       
   }
};
int main()
{
    time t1,t2,t3;
    int x,y,z;
    cout<<"enter first time hour ,min , and sec:-";
    cin>>x>>y>>z;
    t1.settime(x,y,z);
    cout<<"enter second time hour ,min , and sec:-";
    cin>>x>>y>>z;
     t2.settime(x,y,z);
    t1.showtime();
    t2.showtime();
    t3=t1.add(t2);
     t3.normalize();
     cout<<"add two time is=";

    t3.showtime();

    getch();
    return 0;
    
}
