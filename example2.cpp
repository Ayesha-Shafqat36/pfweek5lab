#include <iostream>
using namespace std;
int isgreater(int num1,int num2);
int isminimum(int num1, int num2);
main()
{
 int num1;
 int num2;
 int result;
 cout << "Enter number 1:";
 cin >> num1;
 cout << "Enter number 2:";
 cin >> num2;
 result=isgreater(num1,num2);
 cout << result << " is greater number" << endl;
 result=isminimum(num1,num2);
 cout << result << " is minimum number" << endl;
}
int isgreater(int num1,int num2)
 {
  if (num1 > num2)
   {
       return num1;
   }
  if (num2 > num1)
   {
       return num2;
   }
  return 0;
 }
int isminimum(int num1,int num2)
 {
  if (num1 < num2)
   {
       return num1;
   }
  if (num2 < num1)
   {
       return num2;
   }
  return 0;
 }  