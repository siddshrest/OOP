#include<iostream>
#include<iomanip>
using namespace std;
class employee
{
	private:
		int dataID;
		string name;
		int salary;
	public:
	    employee(int x,string y, int z)
		{
			dataID =x;
			name =y;
			salary =z;
		}
		int display()
		{
			if(salary>5000)
			cout<<"ID ="<<dataID<<endl<<"name ="<<name<<endl<<"salary ="<<salary<<endl;
		}
};
int main()
{
	employee t1(10,"ram",6000);
	employee t2(11,"rita",5000);
	employee t3(12,"sam",7000);
	t1.display();
	t2.display();
	t3.display();
}
