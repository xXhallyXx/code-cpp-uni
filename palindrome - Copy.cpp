#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
    string word1,word2;
    cin>>word1;
    int len=word1.length();
    for(int i=len-1; i>=0; i--)
    {
    word2+=word1[i];
    }
    cout<<word2<<endl;
     if(word1==word2)
      cout<<"Its a palindrome word";
    else
     cout<<"Its not a palindrome word";
     return 0;
}
