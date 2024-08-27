#include<iostream>
using namespace std;

class item
{
private:
    int id;
    double price;
    static int count;
public:
    void getdata()
    {
        cin>>id>>price;
        count++;
    }
    void putdata()
    {
        cout<<"id="<<id<<"price="<<price<<endl;
    }
    static void showcount()
    {
        cout<<"count="<<count<<endl;
    }
};
int item::count=5;
int main()
{
    item t1,t2,t3;
    t1.getdata();
    t1.showcount();
    item::showcount();

    t2.getdata();
    item::showcount();
    t2.showcount();
    t3.getdata();
    item::showcount();
    return 0;
}
