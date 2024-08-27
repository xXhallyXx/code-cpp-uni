#include <iostream>
using namespace std;
class Order
{
private:
    int OrderNumber ;
    string CustomerLocation;
    double price;
    int DiscountPercentage;
public:
    void setdata(string a,int b)
    {
        CustomerLocation=a;
        DiscountPercentage=b;
    }
    Order (int a,double b,int c)
    {
        OrderNumber=a;
        price=(b*(100-c)/100) + 50;
    }
    void getdata ()
    {
        cout<<CustomerLocation<<endl;
        cout<<DiscountPercentage<<endl;
    }
    void showOrderDetails()
    {
        cout<<"Order Number :"<<OrderNumber<<endl;
        cout<<"Location :"<<CustomerLocation<<endl;
        cout<<"Discount percentage :"<<DiscountPercentage<<"%"<<endl;
        cout<<"Final price :"<<price<<endl;
    }
};
int main()
{
    Order n(1,850.50,14);
    n.setdata("Mirpur",14);
    //n.getdata();
    n.showOrderDetails();

    return 0;
}
