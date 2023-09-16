#include<iostream>
#include<iomanip>
using namespace std;
class add
{
	private:
		int len,bre;
	public:
		add(int x,int y)
		{
			len =x;
			bre =y;
		}
		int display()
		{
			cout<<"area of rectangle = "<<len*bre<<endl;
			cout<<"sum ="<<len+bre<<endl;
		}
		~add()
		{
			cout<<"Destructor called"<<endl;
		}
};
int main()
{
	add t1(10,15);   
 	add t2(10,10);   
	t1.display();
	t2.display();
}
