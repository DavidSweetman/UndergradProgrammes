#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>

using namespace std;
int main() 
{
float size;
vector <float> array;
cout<<"How many numbers shall you be entering m'lady?";
cin>>size;

float temp,mean,sd;

for (int i=0; i<size; i++){
cout<<"Enter a number ";
cin>>temp;;
array.push_back(temp);
}

double sum=0.0;
for (int i=0; i<size; i++){
sum+=array[i];
}
mean=sum/size;
cout<<"The mean is"<<mean<<endl;
double sum1=0.0;
for (int i=0; i<size; i++){
sum1+=(array[i]-mean)*(array[i]-mean);
}
sd=sqrt(sum1/size);
cout<<"The Standard Deviation is"<<sd<<endl;

system("PAUSE");
return 0;
}
