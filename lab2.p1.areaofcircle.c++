
#include <iostream>
using namespace std;

const float PI = 3.14;

// inline function to calculate area of circle
inline float area (float radius)
{
 if (area == 0)
    return 0;
 else 
    return(PI*radius*radius);
};

int main()
{ 
    float radius;
    cout<<"Enter radius of circle : ";
    cin>>radius;
    cout<<"Area of circle is : "<< area(radius);
   
    return 0;
}
