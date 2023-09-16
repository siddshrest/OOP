#include<iostream>
#include<iomanip>
using namespace std;
class addamount
{
	private:
		int amount;
	public:
		addamount()
		{
		    amount = 0;
		}
		addamount(int x)
		{
			amount = amount + x;
		}
		int display()
		{
			cout<<"amount on piggie bank = "<<amount<<endl;
		}
};
int main()
{
	addamount t1(100);
	addamount t2;
	t1.display();
	t2.display();
}
