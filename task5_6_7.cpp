#include <iostream>
#include <cmath>
using namespace std;
main ()
{
  float num1;
  float num2;
  float result;
  cout << "Enter number 1=";
  cin >> num1;
  cout << "Enter number 2=";
  cin >> num2;

  result=max(num1,num2);
  cout << "Maximum number is="<< result << endl;
  result=min(num1,num2);
  cout << "Minimum number is=" << result<< endl;
  result=ceil(num1);
  cout << "Number ="<< result << endl;
  result=floor(num1);
  cout << "Number =" << result << endl;
  result=sqrt(num1);
  cout << "Square root=" << result << endl;
  result=pow(num1,num2);
  cout << "Power of number= " << result << endl;
}
