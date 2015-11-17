#include <MersenneTwister.h>
#include <cmath>
#include <SimpleGraph.h>
#include <iostream>


using namespace std;
int main() 
{

MTRand gen;

float x,y,d,n,pi;

cout<<"Enter Number of Raindrops";;
cin>>n;;
int m=0;
SimpleGraph graph1 (600,600);
graph1.setXRange(-0.5,0.5);
graph1.setYRange(-0.5,0.5);
graph1.plotCircle(0,0,270);


for (int i=0;i<n;i++){

x=gen.rand()-0.5;
y=gen.rand()-0.5;
d=sqrt((x)*(x)+(y)*(y));
if (d<0.5){
   m++;
   graph1.setPenColour(5);
   graph1.plotFilledCircle(x,y,4);
}
else
   graph1.setPenColour(13);
   graph1.plotFilledCircle(x,y,4);
}


pi=4*static_cast<float>(m)/static_cast<float>(n);



cout<<pi;

system ("Pause");
return 0;
}



