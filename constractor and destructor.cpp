#include<iostream>
using namespace std;
int count=0;
class A
{
    int a;
public :
    A()
    {
        //cout<<count<<endl;
        count++;
        cout<<"const of object no :"<<count<<endl;
    }
    ~A()
    {
        cout<<"dest of object no :"<<count<<endl;
        count--;
    }
};

int main()
{
    A a1,a2;
    {
        cout<<"block 1"<<endl;
        A a3;
    }
    A a4;
    {
        cout<<"block 2"<<endl;

        A a5;
    }
    A a6;

    return 0;
}
