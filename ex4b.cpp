// hello1.cpp 
// David Sweetman 

// Program to make Temp conversion table. 

#include <iostream> 
#include <cstdlib> 
#include <string>
#include <iomanip>
using namespace std;
int main() 
{
float init,final,step;
cout<<"Enter Initial, Final And Step Size";;
cin>>init>>final>>step;;
float F;
for(float i=init ; i<=final ; i+=step){
F=(9.0/5.0)*i+32.0;
cout<<setprecision(4)<<setw(6)<<i<<" "<<setprecision(4)<<setw(6)<<F<<endl;
}


system ("Pause");
return 0;
}
