#include <iostream>
using namespace std;
string ones(int number);
string tens(int number);
main()
{
   int number;
   string firstDigit;
   string secondDigit;
   cout << "Enter Number=";
   cin >> number;
   int T=number/10;
   int O=number%10;
   firstDigit=tens(T);
   secondDigit=ones(O);

   cout << firstDigit<<secondDigit<< endl;

}
string ones(int number)
{
    if(number==1)
    {
        return "one";
    }
    if(number==2)
    {
        return "two";
    }
    if(number==3)
    {
        return "three";
    }
    if(number==4)
    {
        return "four";
    }
    if(number==5)
    {
        return "five";
    }
    if(number==6)
    {
        return "six";
    }
    if(number==7)
    {
        return "seven";
    }
    if(number==8)
    {
        return "eight";
    }
    if(number==9)
    {
        return "nine";
    }
    return 0;
}
string tens(int number)
{
    if (number==0)
    {
        return " ";
    }
    if (number==2)
    {
        return "twenty";
    }
    if (number==3)
    {
        return "thirty";
    }
    if (number==4)
    {
        return "forty";
    }
    if (number==5)
    {
        return "fifty";
    }
    if (number==6)
    {
        return "sixty";
    }
    if (number==7)
    {
        return "seventy";
    }
    if (number==8)
    {
        return "eighty";
    }
    if (number==9)
    {
        return "ninty";
    }
    return 0;
}