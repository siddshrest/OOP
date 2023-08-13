#include <iostream>
#include <iomanip>
using namespace std;
int fact(int n)
{
    if (n>1)
    {
    cout<< "string n : "<< n<<"\n";
    cout<< "string n-1 : "<< n-1<<"\n";
    return(n* fact(n-1));
    }
    else
    return 1;
    
};

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"factorial is :" << fact(n);
}
