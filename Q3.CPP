//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor
#include<iostream>
#include<conio.h>
using namespace std;
class cube
{
    int v;
    public:
    cube(int x)
    {
        v=x*x*x;
    }
    void display()
    {
        cout<<" cube is="<<v;
    }
};
int main()
{
    cout<<"enter a number:-";
    int x;
    cin>>x;
    cube c=x;
    c.display();
    getch();
    return 0;
}
