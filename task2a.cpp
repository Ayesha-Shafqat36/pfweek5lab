#include <iostream>
#include <conio.h>
using namespace std;
void alpha(char alphabet);
main()
{
    char alphabet;
    cout << "Enter Alphabet=";
    cin >> alphabet;
    alpha(alphabet);
}
void alpha(char alphabet)
{
    if (alphabet>='A' && alphabet<='Z')
    {
    cout << "You have entered capital letter";
    }
    if (alphabet>='a' && alphabet<='z')
    {
        cout << "You have entered small letter";
    }
  
}