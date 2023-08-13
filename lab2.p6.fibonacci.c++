#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t1 =0 , t2 =1 , nextTerm ,n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<t1<<", "<<t2<<", ";
    nextTerm = t1+t2;
    while(nextTerm<=n)
    {
        cout<<nextTerm<<", ";
        t1=t2; 
        t2=nextTerm;
        nextTerm = t1+t2; 
    }
    return 0;
    
}

//convert it to function
// handle situation when n<0

