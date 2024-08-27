#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cout<<i;
    }
    cout<<endl;
    for(int i=1; i<=n-2; i++)
    {
        for(int j=1; j<=n; j++)
        {

            if(j==1)
                cout<<(j+i);
            if(j>1&&j<n)
                cout<<" ";
            if(j==n)
                cout<<n;

        }

        cout<<endl;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<n;
    }
    return 0;
}
