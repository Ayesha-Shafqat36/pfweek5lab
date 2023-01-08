#include <iostream>
#include <cmath>
using namespace std;
float posQuad(float a,float b,float c);
float negQuad(float a,float b,float c);
main()
{
  float a;
  float b;
  float c;
  float result;
  cout << "Enter a=";
  cin >> a;
  cout << "Enter b=";
  cin >> b;
  cout << "Enter c=";
  cin >> c;
  result=posQuad(a,b,c);
  cout << "Positive Answer="<< result << endl;
  result=negQuad(a,b,c);
  cout << "Negative Answer=" << result << endl;


}
float posQuad(float a,float b,float c)
{
  float b2;
  float ac4;
  float sqabc;
  float sQrt;
  float numerator;
  float denominator;
  float PosQuad;
  b2=pow(b,2);
  ac4=(a*c)*4;
  sqabc=b2-ac4;
  sQrt=sqrt(sqabc);
  numerator=-b+sQrt;
  denominator=2*a;
  PosQuad=numerator/denominator;
  return PosQuad;
}
float negQuad(float a,float b,float c)
{
  float b2;
  float ac4;
  float sqabc;
  float sQrt;
  float numerator;
  float denominator;
  float NegQuad;
  b2=pow(b,2);
  ac4=(a*c)*4;
  sqabc=b2-ac4;
  sQrt=sqrt(sqabc);
  numerator=-b-sQrt;
  denominator=2*a;
  NegQuad=numerator/denominator;
  return NegQuad;
}
  