#include<iostream>
using namespace std;
int main ()
{
    int p,q;
    cin>>p>>q;
    int a1[p][q],a2[p][q],sum[p][q],sub[p][q],mul[p][q];
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            cin>>a1[i][j];

        }
    }
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            cout<<a1[i][j]<<" ";

        }
        cout<<endl;
    }
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            cin>>a2[i][j];

        }
    }
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            cout<<a2[i][j]<<" ";

        }
        cout<<endl;
    }
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            sum[i][j]=a1[i][j]+a2[i][j];
            sub[i][j]=a1[i][j]-a2[i][j];
            mul[i][j]=a1[i][j]*a2[i][j];
        }
    }


    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            cout<<sum[i][j]<<"  ";


        }
        cout<<endl;
    }
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            cout<<sub[i][j]<<"  ";


        }
        cout<<endl;
    }
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            cout<<mul[i][j]<<"  ";


        }
        cout<<endl;
    }

    return 0;
}
