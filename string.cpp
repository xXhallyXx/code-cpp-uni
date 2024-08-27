#include<iostream>
#include<string.h>
using  namespace std;
int main()
{
    char s1[]="ISRAT";
    char s2[]="HAFIZ";
    char s3[]="aiub";
    cout<<"Lenght of the s1 ="<<strlen(s1)<<endl;
    cout<<"copyy= "<<strcpy(s1,s2)<<endl;
    cout<<"s1= "<<s1<<endl;
    cout<<"s2= "<<s2<<endl;
    strcat(s1,s2);
    cout<<s1<<endl;
    cout<<s2<<endl;
    //strupr(s3);
    cout<<s3<<endl;
    //strlwr(s2);
    //cout<<s2<<endl;
    int valu=strcmp(s2,s3);//s2>s3 return 1; s3>s2 returun -1;s2=s3=0
    if(valu==0)
        cout<<"charecters are equal"<<endl;
    else
        cout<<"charecters are not equal"<<endl;
    strncat(s3,s1,2);
    cout<<s3<<endl;
    cout<<strncmp(s1,s3,2);
    cout<<s1<<endl;
    strncpy(s3,s2,3);
    cout<<s3<<endl;



    return 0;
}
