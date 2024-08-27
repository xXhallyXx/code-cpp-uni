#include<iostream>
using namespace std;
void f1(int a, int b)
{
    float sum;
    sum=a+b;
    cout<<sum<<endl;
}
void f2(int a, int b)
{
    float sub;
    sub=a-b;
    cout<<sub<<endl;
}
int main()
{
    int x,y;
    cin>>x>>y;
    f1(x,y);
    f2(x,y);
    return 0;
}
