#include <iostream>
using namespace std;
class player
{
private :
    int jersey_number;
public :
    string name;
    void setdata(int a,string b)
    {
        jersey_number=a;
        name=b;
    }
    void getdata()
    {
        cout<<"jersey_number=="<<jersey_number<<endl;
        cout<<"name=="<<name<<endl;
    }
};
class bowler :public player
{
public :
    void showinfo(int i,string n)
    {
         setdata(i,n);
         getdata();
    }
};
class batsman :private player
{
public :
     void showinfo(int i,string n)
    {
         player::setdata(i,n);
         player::getdata();
    }
};

int main ()
{
    player o;
    o.setdata(3,"jhfg");
    o.getdata();
    bowler a;
    a.showinfo(5,"bhfh");
    batsman b;
    b.showinfo(9,"ahddd");
    return 0;
}
