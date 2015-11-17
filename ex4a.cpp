// hello1.cpp 
// David Sweetman 

// Program to convert Temperature. 

#include <iostream> 
#include <cstdlib> 
#include <string>
using namespace std;
int main() 
{
float init,final,step;
cout<<"Enter Initial, Final And Step Size";;
cin>>init>>final>>step;;
for(float i=init ; i<=final ; i+=step){
cout<<i<<" ";
}

system ("Pause");
return 0;
}
