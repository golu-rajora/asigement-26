//4. Define a class Counter and Write a program to Show Counter using Constructor
#include<iostream>
#include<conio.h>
using namespace std;
class counter
{
    int static count;
    public:
    counter()
    {
        count++;
    }
    void show()
    {
        cout<<"creating object is="<<count;
    }
};
int counter::count;
int main()
{
    counter c1,c2,c3;
    c1.show();
    getch();
    return 0;
}
