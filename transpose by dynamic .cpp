#include<iostream>
using namespace std;
void arrayyy(int **a,int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int **a=new int *[n];
    for(int i=0; i<n; i++)
    {
        a[i]=new int [n];
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }

    }
    arrayyy( a,n);
    for(int j=0; j<n; j++)
        {
            delete[] a[j];
        }
    delete a;
    return 0;
}

