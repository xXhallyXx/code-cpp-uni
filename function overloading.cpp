#include<iostream>
using namespace std;

void f(int a,int b)
{
    int sum;
    sum=a+b;
    cout<<"f1 sum "<<sum<<endl;
}
void f(int a,int b,int c)
{
    int sum;
    sum=a+b+c;
    cout<<"f2 sum "<<sum<<endl;
}
void f(int a,int b,int c,int d)
{
    int sum;
    sum=a+b+c+d;
    cout<<"f3 sum "<<sum<<endl;
}
int main()
{

    f(2,3);
    f(1,2,3);
    f(1,2,3,4);

    return 0;
}
