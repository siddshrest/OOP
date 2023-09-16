#include<iostream>
#include<iomanip>
using namespace std;
class account 
{
	private:
	int acc , blc;
	public:
		int getData()
		{
			cout<<"enter acc no and balance";
			cin>>acc>>blc;
		}
		int display(account &b1,account &b2)
		{
			cout<<b1.acc<<setw(8)<<b1.acc<<endl;
			cout<<b2.acc<<setw(8)<<b2.acc<<endl;
		}
		int moneytransfer(account &a1,account &a2)
		{
			int x;
			cout<<"how much money u would transfer";
			cin>>x;
			a2.blc= a2.blc+x;
			a1.blc = a1.blc-x;
			
		}
};
int main()
{
	account a,b,c;
	a.getData();
	b.getData();
	c.moneytransfer(a,b);
	c.display(a,b);
}
