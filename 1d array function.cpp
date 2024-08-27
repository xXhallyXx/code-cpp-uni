#include<iostream>
using namespace std;
void arrayy (int *a, int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main ()
{
    int n;
    cin>>n;

    int *p=new int[n];

    for (int i=0; i<n; i++)
    {
        cin>>p[i];
    }

    arrayy(p,n);
    delete p;

    return 0;
}
