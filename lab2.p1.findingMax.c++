
#include <iostream>
using namespace std;

inline float max(float num1 , float num2)

//string result = (marks >= 40) ? "passed" : "failed";

{
  /* if(num1>num2)
        return num1;
       else
        return num2;*/
    
    return (num1>num2) ? num1 : num2;
};

int main()
{
    int num1, num2;
    cout<<"Enter two numbers : \n";
    cin>>num1>>num2;
    cout<<"Max among two number is : "<<max(num1,num2);
} 


//inline function reduces function call overhead
// it expands line when it is called
//when inline function is called the whole code of inline function gets copied or subsituted at inline function call.
// subsitution is performed at compile time
