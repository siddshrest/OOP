//Write a program to set a structure to hold feet and inches, assign values to the members of the structure and print out the values in the format 4’ 10” by function. Pass the structure to the function. [Note: if inch is greater than 12, covert it into feet]

#include<iostream>
#include<iomanip>
using namespace std;
struct height
{
    int feet , inches;
};

void input (height &a) 
{
    cout<<"Enter feet and inches :\n";
    cin>>a.feet>>a.inches;
}

void process (height &a)
{
    if(a.inches>=12)
    {
        a.feet=a.feet+(a.inches/12);
        a.inches = a.inches%12;
    }
    
}
// function to format date 
void output(height &a)
{
    cout<<"Height is :"<<a.feet<<"'"<<a.inches<<"''";
}

int main()
{
    struct height b;
    input (b);
    process (b);
    output (b);
}
