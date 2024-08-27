#include<iostream>
using namespace std;
void sum (int *a,int *b)
{
    //int *ptra,*ptrb;

   // ptra=&a;
   // ptrb=&b;
    cout<<*a+*b<<"\n";
    cout<<a<<"\n";
    cout<<b<<"\n";

}
int main()
{
    int a,b;
    cin>>a>>b;
    sum(&a,&b);
    return 0;
}
