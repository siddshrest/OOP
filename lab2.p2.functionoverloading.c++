
//Write a program using overloaded function named area() that can be used to compute the area of triangle, rectangle as well as circle.

#include<iostream>
#include<iomanip>
using namespace std;
const float PI = 3.14;
float area(float radius);
float area(float len, float bre);
float area(float n, float height, float base);

int main()
{
    float radius,len,bre;
    float height, base;
    float n = 0.5;
    
    cout<<"Enter raidus of circle : \n";
    cin>>radius;
    cout<<"Area of circle : \n"<<area(radius);
    
    cout<<"\nEnter length and breadth  of reactangle :\n";
    cin>>len>>bre;
    cout<<"Area of rectangle :\n"<<area(len, bre);
    
    cout<<"\nEnter height and base :\n";
    cin>>height>>base;
    cout<<"Area of triangle :\n"<<area(n, height, base);
}   

// area of circle
float area(float radius)
{
   return (PI* radius* radius);
};

// area of rectangle
float area(float len, float bre)
{
    return (len*bre);
}

// area of triangle
float area(float n, float height, float base)
{
    return ((base*height)/n);
}
