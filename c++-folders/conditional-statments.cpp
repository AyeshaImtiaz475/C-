#include<iostream>
using namespace std;

/*
A school has the following rules for grading system;
a.below 25-F
b. 25 to 44 -E
c. 45 to 49 -D
d. 50 to 59 -C
e.60 TO 79 -B
f. 80 to 100 -A
Ask user to enter marks and print the corrosponding grade.

*/

int main()
{
    int marks;
    cout<<"Input your marks :" ;
    cin>>marks;

    if(marks < 25)
    {
        cout<<"Grade F";
    }
    else if(marks >= 25 && marks <= 44)
    {
        cout<<"Grade E";
    }
    else if(marks >=45 && marks<= 49)
    {
        cout<<"Grade D";
    }
    else if(marks>=50 && marks <= 59)
    {
        cout<<"Grade C";
    }
    else if(marks >=60 && marks <=79)
    {
        cout<<"Grade B";
    }
    else if(marks>=80 && marks <= 100)
    {
        cout<<"Grade A";
    }
    else{
        cout<<"You had not given the exam";
    }


    return 0;
}