#include<iostream>
using namespace std;
void print(int n)
{
    if(n==1)//base condition
    {
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;//induction code
    print(n-1);
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}
