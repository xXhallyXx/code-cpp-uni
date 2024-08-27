#include <iostream>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    int a1[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a1[i][j];

        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<a1[i][j]<<" ";

        }
        cout<<endl;
    }
    for(int i=1;i>=0;i--)
    {
        for(int j=1;j>=0;j--)
        {
            cout<<a1[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

