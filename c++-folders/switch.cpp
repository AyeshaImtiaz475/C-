//switch ststaments 

#include<iostream>
using namespace std;

/*
Take the day no and print the corresponding day for 1 print monday, 
for 2 print tuesday and so on for 7 print sunday.
*/


int main()
{
    int day;
    cout<<"Input the day :";
    cin>>day;

    switch(day)
    {
        case 1:
        cout<<"It's Monday";
        break;
        case 2:
         cout<<"It's Tuesday";
         break;
        case 3:
         cout<<"It's Wednesday";
          break;
        case 4:
         cout<<"It's Thursday";
         break;
        case 5:
         cout<<"It's Friday";
          break;
        case 6:
         cout<<"It's Saturday";
          break;
        case 7:
         cout<<"It's Sunday";
          break;
        default:
        cout<<"Invalid";
    }

    return 0;
}