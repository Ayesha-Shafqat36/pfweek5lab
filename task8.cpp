#include <iostream>
#include <cmath>
using namespace std;
float calculateheight(int base,float degree);
main()
{
  int base;
  float angle;
  float result;
  float degree;
  float height;
  cout << "Enter base=";
  cin >> base;
  cout << "Enter degree=";
  cin >>degree;
  height=calculateheight(base,degree);
  cout << "Height =" << height<< endl;
}
float calculateheight(int base,float degree)
{
  float radian;
  float radians;
  float angle;
  float height;
  radian=57.2958;
  radians=degree/radian;
  angle= tan(radians);
  height=angle*base;
  return height;
}