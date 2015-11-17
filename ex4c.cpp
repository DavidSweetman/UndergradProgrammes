// hello1.cpp 
// David Sweetman 

// Program for step sizes and saving. 

#include <iostream> 
#include <cstdlib> 
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
int main() 
{
float init,final,step;
string filename;
cout<<"Enter Filename";
cin>>filename;

ofstream filestr;
filestr.open(filename.c_str());

cout<<"Enter Initial, Final And Step Size";;
cin>>init>>final>>step;;
float F;
for(float i=init ; i<=final ; i+=step){
F=(9.0/5.0)*i+32.0;
filestr<<setprecision(4)<<setw(6)<<i<<" "<<setprecision(4)<<setw(6)<<F<<endl;
}
filestr.close();

system ("Pause");


return 0;
}
