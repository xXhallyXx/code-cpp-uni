#include<iostream>
using namespace std;
class vehicle
{
protected :
    string name;
    void size()
    {
        cout<<"size"<<endl;
    }
    int insurance;
public :
    int tire_count;
    void setdata()
    {
        cout<<"enter a name "<<endl;
        cin>>name;
        cout<<"enter a insurance num "<<endl;
        cin>>insurance;
    }
    void getdata()
    {
        cout<<"name :"<<name<<endl;
        cout<<insurance<<endl;
        size();
    }
};
class car :public vehicle
{
protected :
    int car_id;
public :
    string car_model;
    void setcardata()
    {
        cout<<"enter a car id :"<<endl;
        cin>>car_id;
        cout<<"enter car model "<<endl;
        cin>>car_model;
        setdata();
    }
    void getcardata()
    {
        getdata();
        cout<<car_id<<endl;
        cout<<car_model<<endl;
    }
};
int main()
{
    vehicle o1;
    o1.setdata();
    o1.getdata();
    car o2;
    o2.setcardata();
    o2.getcardata();
    return 0;
}
