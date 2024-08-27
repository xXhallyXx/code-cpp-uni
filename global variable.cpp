#include<iostream>
using namespace std;
int x;
void f1()
{

    cout<<x++<<endl;
}
void f2()
{

    cout<<++x<<endl;
}
void f3 (int r)
{
    cout<<(3*r+1)<<endl;
}
int main()
{
    int x=2;
    f1 ();
    f2 ();
    f3 (3);
    cout<<x;
    return 0;
}
