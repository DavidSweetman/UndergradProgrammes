#include <SimpleGraph.h>
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
int main() 
{
SimpleGraph graph1 (600,480);

graph1.setXRange(-10.0,10.0);
graph1.setYRange(-10.0,10.0);

graph1 .setTitle("Interfering Sine Functions");
graph1 .drawBorder();
graph1 .drawLimits();
graph1 .setPenColour(LIGHTBLUE);

vector<double> xvec;
vector<double> wvec;

float x=-10.0;
float y=0;
float z=0;
float w=0;
while (x<=10){

y=1*sin(2*(22/7)*1*x);
z=0.9*sin(2*(22/7)*1.1*x);
w=y+z;

wvec.push_back(w);
xvec.push_back(x);
x+=0.1;
}
graph1.plotLines(xvec,wvec);


graph1.waitForKeyPress();
graph1.closeGraph();

return 0;
}

