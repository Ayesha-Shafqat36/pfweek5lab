#include <iostream>
using namespace std;
bool number1 (int num);
main ()
{
  bool numb;
  int num; 
  cout << "enter number :";
  cin >> num;
  numb = number1(num);
  cout << numb << endl;
}
bool number1(int num)

  {
    
   int num1;
   int num2;
   int num3;
   int numb;
   int a;
   num1=(num%10);
   a=num/10;
  
   num2=(a%10);
   a=(a/10);
   
   num3=(a%10);
   a=(a/10);
   
    
   if (num1==num3)
   { 
   
   return true;
   }

//    if (num1!=num3)
//    {
//     
//    return false;
//    }
   return false;
  }