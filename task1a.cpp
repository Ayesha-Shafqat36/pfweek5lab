#include <iostream>
using namespace std;
int add(int num1,int num2);
float divide(float num1,float num2);
main ()
{
  int num1;
  int num2;
  float result;
  cout << "Enter number 1:";	
  cin >> num1;
  cout << "Enter number 2:";
  cin >> num2;
  result=add(num1,num2);
  cout << "Enter result=" << result << endl;
  result=divide(num1,num2);
  cout << "Enter result=" << result << endl;
  
}
int add(int num1,int num2)
{
 int sum;
 sum=num1+num2;

 return sum;
}
float divide(float num1,float num2)
{
 float division;
 division=num1/num2;

 return division;
}
 