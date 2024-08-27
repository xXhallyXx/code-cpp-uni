#include<iostream>
using namespace std;
void prime (int a)
{
    int f=0;
    for(int i=2; i<a; i++)
    {
        if(a%i==0)
        {
           // f++;
            cout<<"composite";
            break;

        }
    }
    if(f==0)
        cout<<"prime";
}
int main()
{
    int n;
    cin>>n;
    prime(n);
    return 0;
}
