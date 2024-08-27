#include<iostream>
using namespace std;
class vehicle
{
protected :
    string name ;
    void size()
    {
        cout<<"size"<<endl;
    }
    int insurance;
public :
    int tire_count;
    void setdata()
    {
        cout<<"enter the vehicle name :"<<endl;
        cin>>name;
        cout<<"enter the tire count :"<<endl;
        cin>>tire_count;
        cout<<"enter the insurance :"<<endl;
        cin>>insurance;
    }
    void getdata()
    {
        cout<<"name :"<<name<<endl;
        cout<<"tire_count: "<<tire_count<<endl;

        cout<<"insurance :"<<insurance<<endl;
        size();
    }
};
class car:public vehicle
{
protected :
    int car_id;
public :
    string car_model;

    void putcardata (int a,string b)
    {
        setdata();
        car_id=a;
        car_model=b;
    }
    void showcardata()
    {

        getdata();
        cout<<"car id :"<<car_id<<endl;
        cout<<"car model :"<<car_model<<endl;
    }
};
class bike:public vehicle
{
protected :
    int bike_id;
public :
    string bike_model;

    void putbikedata (int a,string b)
    {
        setdata();
        bike_id=a;
        bike_model=b;
    }
    void showbikedata()
    {

        getdata();
        cout<<"bike id :"<<bike_id<<endl;
        cout<<"bike model :"<<bike_model<<endl;
    }
};
class insurance_company
{
protected :
    int insurences;
public :
    void setdata()
    {
        cout<<"enter the insurance :"<<endl;
        cin>>insurences;
    }
    void getdata ()
    {
        cout<<"insurances :"<<insurences<<endl;
    }

};
class insurance : public insurance_company
{

protected:
    int insurance_number;
public:
    string vehicle_type;

    void putinsurancedata()

    {   setdata();
        cout<<"enter the insurance_number :"<<insurance_number<<endl;
        cin>>insurance_number;
        cout<<"enter the vehicle_type :"<<vehicle_type<<endl;
        cin>>vehicle_type;

    }
    void showinsuranceinfo()
    {

        getdata();

        cout<<"insurance_number :"<<insurance_number<<endl;
        cout<<" vehicle_type:"<<vehicle_type<<endl;
    }
};

int main()
{
    vehicle o1;
    o1.setdata();
    o1.getdata();
    car o2;

    o2.putcardata(412,"car");
    o2.showcardata();
    bike o3;

    o3.putbikedata(456,"bike");
    o3.showbikedata();

    insurance_company o4;
    o4.setdata();
    o4.getdata();
    insurance o5;
    o5.putinsurancedata();
    o5.showinsuranceinfo();
    return 0;
}

