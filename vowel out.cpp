#include<iostream>
#include<string.h>
using namespace std;
void vowel_out(char a[],int n)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            cout<<" ";
        else
            cout<<a[i];
    }
}
int main()
{
    char a[100];
    cin>>a;
    int lenght=strlen(a);
    vowel_out(a,lenght);
    return 0;
}
