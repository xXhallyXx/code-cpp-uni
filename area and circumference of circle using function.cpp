#include<iostream>
using namespace std;
void area(float r)
{
    float area;
    area=3.1416*r*r;
    cout<<"Area:"<<area<<endl;
}
void circumference(float r)
{
    float circumference;
    circumference=2*3.1416*r;
    cout<<"circumference:"<<circumference<<endl;
}
int main()
{
    float r;
    cin>>r;
    area(r);
    circumference(r);
    return 0;
}
