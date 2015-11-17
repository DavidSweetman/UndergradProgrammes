// hello1.cpp 
// David Sweetman 

// Program to convert Temperature. 

#include <iostream> 
#include <cstdlib> 
#include <string>
using namespace std;
int main() 
{
    float Temp;
    char Type;
    float Tc,Tf,Tk;

     cout<<"Enter Temperature";
     cin>>Temp>>Type;;
if ((Type=='F')||(Type=='f')){
      Tf=Temp;
      Tc=(Temp-32)*(5.0/9.0);
      Tk=(Temp-32)*(5.0/9.0)+273.0;
}else if ((Type=='C')||(Type=='c')){
      Tf=(9.0/5.0)*Temp+32.0;
      Tc=Temp;
      Tk=Temp+273.0;
}else if ((Type=='K')||(Type=='k')){
      Tf=(9.0/5.0)*Temp+32.0;+273.0;
      Tc=Temp-273.0;
      Tk=Temp;
}else{
cout<<"error wrong units"<<endl;
}





cout<<"Temp in Celcius:"<<Tc<<endl;
cout<<"Temp in Farenheit:"<<Tf<<endl;
cout<<"Temp in Kelvin:"<<Tk<<endl;
system("PAUSE");
return 0;
}
