#include<iostream>
using namespace std;
void print_to(long long int n)
{
    if(n>0)
    {
        cout<<n<<" ";

        print_to(n-1);
    }
}
int main()
{
    long long int n;
    cin>>n;
    print_to(n);
    return 0;
}
