#include<iostream>
using namespace std;
class Item
{
private:
    int a;
    int b;
public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void getData ()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<a+b<<endl;
    }
};

int main()
{
    Item w;
    w.setData(14,4);
    w.getData();
    return 0;
}
