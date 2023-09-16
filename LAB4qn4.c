#include<iostream>
#include<iomanip>
using namespace std;
class Rectangle
{
	private:
		int len,bre;
	public:
		Rectangle(int x,int y)
		{
			len =x;
			bre =y;
		}
		Rectangle()
		{
			len=0;
			bre=0;
		}
		Rectangle(int x)
		{
			len = x;
			bre = x;
		}
		int display()
		{
			cout<<"area of rectangle = "<<len*bre<<endl;
		}
};
int main()
{
	Rectangle t1(100,101);
	Rectangle t2(100);
	Rectangle t3;
	t1.display();
	t2.display();
	t3.display();
	return 0;
}
