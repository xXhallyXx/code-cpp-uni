#include <iostream>
using namespace std;
struct student
{
    string name;
    string department;
    int semester,id;

};
int main()
{
    student a;
    a.name="ISRAT";
    a.department="CSE";
    a.semester=1;
    a.id=50778;
    cout<<"name "<<a.name<<" department "<<a.department<<" semester "<<a.semester<<" id "<<a.id<<endl;
    student b;
    b.name="ISRAT HAHIZ";
    b.department="CSE";
    b.semester=1;
    b.id=50778-1;
    cout<<"name "<<b.name<<" department "<<b.department<<" semester "<<b.semester<<" id "<<b.id<<endl;
    return 0;
}
