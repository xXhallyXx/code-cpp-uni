#include<iostream>
using namespace std;
class mobile
{
private:
    int imei_no;
protected:
    string screen;
public:
    string model;

    void set_data()
    {
        cout<<"Enter IMEI Number: ";
        cin>>imei_no;
        cout<<"Enter screen: ";
        cin>>screen;
    }
    void get_data()
    {
        cout<<imei_no<<endl;
        cout<<screen<<endl;
    }
};
class samsung: private mobile
{
public:
    int i;
    string s;
    samsung()
    {
        i=10;
    }
    samsung(string a)
    {
        s=a;
    }
    void set_samsung()
    {
        set_data();
    }
    void get_samsung()
    {
        cout<<"IMEI N0 & Screen of samsung: ";
        get_data();
//        cout<<"screen of samsung: "<<screen<<endl;
    }
};
class iphone: protected mobile
{
public:
    int i=14;
    string s;
    iphone(){}
    iphone(string a)
    {
        s=a;
    }
    void set_iphone()
    {
        set_data();
    }
    void get_iphone()
    {
        cout<<"IMEI N0 & screen of iphone: ";
        get_data();
//        cout<<"screen of iphone: "<<screen<<endl;
    }
};
class Nokia: public mobile
{
public:
    string name;
    int price;
    Nokia()
    {
    }
    Nokia(string b,int a)
    {
        name=b;
        price=a;
    }
    void get_nokia()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main ()
{
    Nokia n1("Purano Nokia",100);
    n1.get_nokia();

    samsung s1;

    // Set and get data for Samsung object
    s1.set_samsung();
    s1.get_samsung();

    iphone i1;

    // Set and get data for iPhone object
    i1.set_iphone();
    i1.get_iphone();

    return 0;
}

