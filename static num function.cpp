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
void showcount()
{
	cout<<"count="<<count<<endl;
}
};
int item::count;

int main()
{
	item t1;
	t1.getdata();
	t1.showcount();
	item t2;
	t2.getdata();
	t2.showcount();
	return 0;
}

