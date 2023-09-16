#include<iostream>
#include<iomanip>
using namespace std;
class Test 
{
	private:
		int code,price;
	public:
		Test(int x,int y)
		{
			code =x;
			price =y;
		}
		Test(Test &t1)
		{
			code = t1.code;
			price = t1.price;
		}
		int display()
		{
			cout<<"code="<<code<<setw(10)<<"price ="<<price<<endl;
		}
};
int main()
{
	Test t1(100,101);
	Test t2(t1);
	t2.display();
}
