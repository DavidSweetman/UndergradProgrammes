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

graph1 .setTitle("A Sine Function ");
graph1 .drawBorder();
graph1 .drawLimits();
graph1 .setPenColour(LIGHTBLUE);

float x=-5.0;
float y=0;
graph1.moveTo(x,y);
while (x<=5.0){
y=1*sin(2*(22/7)*0.5*x);
graph1.lineTo(x,y);
x+=0.1;

}
graph1.waitForKeyPress();
graph1.closeGraph();

return 0;
}
