#include<iostream>
using namespace std;
void solve(int n)
{
    if(n>0)//base condition

    {
        solve (n-1);
        cout<<n<<endl;//induction code
    }

}
int main()
{
    int n;
    cin>>n;

    solve(n);
    return 0;
}
