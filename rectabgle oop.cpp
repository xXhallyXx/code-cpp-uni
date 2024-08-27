#include<iostream>
using namespace std;

class Rectengle
{
private :
    double len;
    double wid;
public :
    void get_len_wid(double a, double b)
    {
        len=a;
        wid=b;
    }

    void setdata ()
    {
        double area=len*wid;
        cout<<"Area :"<<area;
    }
};
int main()
{
    Rectengle n;
    n.get_len_wid (3,4.5);

    n.setdata();
    return 0;
}
