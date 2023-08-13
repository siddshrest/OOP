// Write a program to set a structure to hold a date (mm, dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2020 by function. Pass the structure to the function.

#include<iostream>
#include<iomanip>
using namespace std;
struct Date
{
    int mm, dd, yy;
};

void input (Date &date_input) 
{
    cout<<"Enter mm/dd//yy :\n";
    cin>>date_input.mm>>date_input.dd>>date_input.yy;
}

// function to format date 
void output(Date &date_input)
{
    cout<<"Date is :"<<date_input.mm<<"/"<<date_input.dd<<"/"<<date_input.yy;
}

int main()
{
    struct Date date_output;
    input (date_output);
    output (date_output);
}
