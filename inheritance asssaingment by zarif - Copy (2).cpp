#include <iostream>
using namespace std;
class Vehicle
{
protected:
    string Name;
    void size()
    {
        cout<<"Size of the vehicle is XY "<<endl;
    }
    int Insurance;
public:
    int Tire_count;

    void set()
    {
        cout<<"Enter Vehicle Name: ";
        cin>>Name;
        cout<<"Enter Insurance: ";
        cin>>Insurance;
        cout<<"Enter tire count: ";
        cin>>Tire_count;
    }
    void get()
    {
        cout<<"Name: "<<Name<<"\n"<<"Insurance: "<<Insurance<<"\n"<<"Tire_count: "<<Tire_count<<"\n";
        size();
    }

};
class Insurance_Company
{
protected:
    int Insurances;
public:
    void set()
    {
        cout<<"Enter Insurances: ";cin>>Insurances;
    }
    void get()
    {
        cout<<"Insurances: "<<Insurances;
    }
};
class Car: public Vehicle
{
protected:
    int Car_Id;
public:
    string Car_model;
    void set_Car()
    {
        cout<<"Enter Car ID: ";
        cin>>Car_Id;
        cout<<"Enter Car Model: ";
        cin>>Car_model;
        set();
    }
    void get_Car()
    {
        cout<<"Car ID: "<<Car_Id<<endl;
        cout<<"Car Model: "<<Car_model<<endl;
        get();
    }
};
class Bike: public Vehicle
{
protected:
    int Bike_Id;
public:
    string Bike_model;
    void set_Bike()
    {
        cout<<"Enter Bike ID: ";
        cin>>Bike_Id;
        cout<<"Enter Bike Model: ";
        cin>>Bike_model;
        set();
    }
    void get_Bike()
    {
        cout<<"Bike ID: "<<Bike_Id<<endl;
        cout<<"Bike Model: "<<Bike_model<<endl;
        get();
    }

};
class Insurance: public Insurance_Company
{
protected:
    int Insurance_number;
public:
    string Vehicle_type;

    void set_Insurance()
    {
        cout<<"Enter Insurance Number: ";cin>>Insurance_number;
        cout<<"Enter Vehicle type: ";cin>>Vehicle_type;
        set();
    }
    void get_Insurance()
    {
        cout<<"Insurance Number: "<<Insurance_number<<endl;
        cout<<"Vehicle type: "<<Vehicle_type<<endl;
        get();
    }
};
int main ()
{
    Car c1;
    c1.set_Car();
    c1.get_Car();

    Bike b1;
    b1.set_Bike();
    b1.get_Bike();

    Insurance i1;
    i1.set_Insurance();
    i1.get_Insurance();

    return 0;
}
