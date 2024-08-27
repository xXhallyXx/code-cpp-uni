#include<iostream>
using namespace std;
void swapp(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"The swapping numbers: ";
    cout<<a<<" "<<b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swapp(a,b);

return 0;
}
