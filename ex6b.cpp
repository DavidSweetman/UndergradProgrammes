#include <SimpleGraph.h>
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
int main() 
{
SimpleGraph graph1 (600,480);

graph1.setXRange(-5.0,5.0);
graph1.setYRange(-5.0,5.0);

graph1 .setTitle("Varying Sine Functions");
graph1 .drawBorder();
graph1 .drawLimits();
graph1 .setPenColour(LIGHTBLUE);

vector<double> xvec;
vector<double> yvec;
vector<double> zvec;
vector<double> wvec;
float x=-5.0;
float y=0;
float z=0;
float w=0;
graph1.moveTo(x,y);


while (x<=5.0){
y=1.5*sin(2*(22/7)*0.5*x);
z=0.5*sin(2*(22/7)*1*x);
w=2*sin(2*(22/7)*5*x);
yvec.push_back(y);
xvec.push_back(x);
zvec.push_back(z);
wvec.push_back(w);
x+=0.1;

}
graph1.plotLines(xvec,yvec);
graph1 .setPenColour(RED);
graph1.plotLines(xvec,zvec);
graph1 .setPenColour(14);
graph1.plotLines(xvec,wvec);
graph1.waitForKeyPress();
graph1.closeGraph();

return 0;
}
