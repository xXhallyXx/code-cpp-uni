#include <iostream>
using namespace std;
int main()
{
    int a,b,sum;
    cin>>a>>b;
    int *ptra,*ptrb;
    ptra=&a;
    ptrb=&b;
    sum=*ptra+*ptrb;
    cout<<ptra<<endl;
    cout<<ptrb<<endl;
    cout<<sum;
    return 0;
}
