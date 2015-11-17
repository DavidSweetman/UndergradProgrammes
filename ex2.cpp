// hello1.cpp 
// David Sweetman 

// Program to convert Temperature. 

#include <iostream> 
#include <cstdlib> 
using namespace std;
int main() 
{
    float a;
    float sum;

cout<<"Enter temp in Celcius";
cin>>a;
sum=(9/5)*a+32;

cout<<"temp in farenheit:"<<sum<<endl;
system("PAUSE");
return 0;
}
