#include <iostream>
using namespace std;
int time(int Hour,int Minute);
main()
{
    int Hour;
    int Minute;
    time(Hour,Minute);
}
int time(int Hour,int Minute)
 {
    int sum; 
    int hour;
    int minute;
    cout << "Enter Hours=";
    cin >> hour;
    cout << "Enter minutes=";
    cin >> minute;
    cout << "Current Time is="<< hour << ":" << minute << endl;
    sum=minute+15;
 if (minute > 59)
   {
    hour=hour+1;
    minute=minute-60;
   }
 if (hour > 23)
    {
     hour=hour-24;
    }
   cout << "Time after 15 minutes="<< hour << ":"<< minute <<endl;
}

    