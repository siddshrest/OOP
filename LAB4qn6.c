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
		int display()
		{
			cout<<"area of rectangle = "<<len*bre<<endl;
		}
};
int main()
{
	Rectangle t1(10,15);   // implicity
 	Rectangle t2(10,10);   // explicity
	t1.display();
	t2.display();
}
