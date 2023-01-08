#include <iostream>
using namespace std;
int EO(int num);
main()
{
  int sum;
  int num;
  cout << "Enter five digit number:";
  cin >> num;
  sum=EO(num);
  
}
int EO(int num)
{
  int remainder1;
  int remainder2;
  int remainder3;
  int remainder4;
  int remainder5;
  int quotient1;
  int quotient2;
  int quotient3;
  int quotient4;
  int sum;

  remainder1=num%10;
  quotient1=num/10;
  remainder2=quotient1%10;
  quotient2=quotient1/10;
  remainder3=quotient2%10;
  quotient3=quotient2/10;
  remainder4=quotient3%10;
  quotient4=quotient3/10;
  remainder5=quotient4%10;

  sum=remainder1+remainder2+remainder3+remainder4+remainder5;
if (sum%2 == 0)
   {
    cout << "Number is Evinish";
   }
if (sum%2 != 0)
   {
    cout << "Number is Oddish";
   }
  return sum;
}