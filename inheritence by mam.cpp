#include<iostream>
using namespace std;
class mobile
{
private :
    int imei_no;
protected :
    string screen;
public :
    string model;
    void s()
    {
        cout<<"the screen type of mobile "<<endl;
    }
    void m()
    {
        cout<<"the model of the mobile "<<endl;
    }
    void setimei(int i)
    {
        imei_no=i;
    }
    void getimei()
    {
        cout<<"the imei number is:"<<imei_no<<endl;
    }
    void setscreen(string s)
    {
        screen=s;
    }
    void getscreen ()
    {
        cout<<"the screen type is "<<screen <<endl;
    }
};
class samsung :private mobile
{
public :
    int i;
    string s;
    samsung ()
    {
        cout<<"it is a samsung phone "<<endl;
    }
    samsung (string name)
    {
        cout<<"the model of samsung id "<<name <<endl;
    }
    void setmobileinfo(int im,string sc)
    {
        i=im;
        s=sc;
        setimei(i);
        setscreen(s);
    }
    void getmobileinfo()
    {
        mobile::getimei();
        mobile::getscreen();
    }
    void smfunc()
    {
        mobile::s();
        mobile::m();
    }
};
class nokia :public mobile
{
public :
    nokia ()
    {
        cout<<"its a nokia phone "<<endl;
    }
    nokia (string name)
    {
        cout<<"the model of nokia is "<<name<<endl;
    }
};
class iphone:protected mobile
{
public :
    int i;
    string s;
    iphone ()
    {
        cout<<"its a iphone "<<endl;
    }
    iphone(string name)
    {
        cout<<"the model of iphone is " <<name<<endl;
    }
    void smfunc ()
    {
        mobile::s();
        mobile::m();
    }
    void setmobileinfo(int im,string sc)
    {
        i=im;
        s=sc;
        setimei(i);
        setscreen(s);
    }
    void getmobileinfo()
    {
        mobile::getimei();
        mobile::getscreen();
    }
};
int main()
{
    mobile m;
    m.s();
    m.m();
    m.setimei(1923764);
    m.getimei();
    m.setscreen("glass");
    m.getscreen();
    cout<<"....."<<endl;
    //private
    samsung a;
    samsung d("dhki");
    a.setmobileinfo(2334343,"ydydy");
    a.getmobileinfo();
    a.smfunc();
    cout<<"...."<<endl;
    //public
    nokia b;
    b.s();
    b.m();
    b.setimei(635446);
    b.getimei();
    b.setscreen("glhd");
    b.getscreen();
    cout<<".....:"<<endl;
    //protocted
    iphone c;
    iphone n("hfkfhk");
    c.smfunc();
    c.setmobileinfo(8748454,"dgdyhd");
    c.getmobileinfo();
    return 0;
}
