#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char a[100];
    cout<<"enter the name "<<endl;
    cin>>a;
    int len=strlen(a);
    for (int i=0;i<len;i++)
    {
        cout<<a[i];
    }



    return 0;
}

