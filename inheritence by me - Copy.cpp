#include<iostream>
using namespace std;
class mobile
{
private :
    int imoi_no;
protected :
    string screen;
public :
    string model;
    void setdata ()
    {
        cout<<" enter the imo_no :";
        cin>>imoi_no;
        cout<<"enter the screen name :";
        cin>>screen;
    }
    void getdata()
    {
        cout<<"imoi no "<<imoi_no<<endl;
        cout<<"screen name "<<screen<<endl;
    }
};
 class samsung :private mobile
{
public :
    int i;
    string s;
    samsung()
    {
        cout<<"default"<<endl;
    }
    samsung(string a)
    {
        s=a;
    }
    void set_sum()
    {
        cout<<"enter the info of sumsung :"<<endl;
        setdata();
    }
    void get_sum()
    {
        cout<<"info for sumsung :"<<endl;
        getdata();
    }
};
class iphone :protected mobile
{
public :
    int i;
    string s;
    iphone()
    {
        cout<<"Default"<<endl;
    }
    iphone(string a)
    {
        s=a;
    }
    void set_ip()
    {
        cout<<"enter the info of iphone :"<<endl;
        setdata();
    }
    void get_ip()
    {
        cout<<"info for iphone :"<<endl;
        getdata();
    }
};
class nokia :public mobile
{
public :
    int a;
    nokia()
    {
        cout<<"default"<<endl;
    }
    nokia (int b)
    {
        a=b;
        cout<<a<<endl;
    }
    void set_nokia()
    {
        cout<<"enter the info of nokia :"<<endl;
        setdata();
    }
    void get_nokia()
    {
        cout<<"info for nokia :"<<endl;
        getdata();
    }
};
int main()
{
    samsung m1;
    m1.set_sum();
    m1.get_sum();

     iphone m2;
     m2.set_ip();
     m2.get_ip();

     nokia m3;
     nokia();
     nokia(3);
    return 0;
}
