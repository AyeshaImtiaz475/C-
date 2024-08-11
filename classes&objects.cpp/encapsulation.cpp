/*Encapsulation: Data member: capsule consist of some items inside capsule and the other
part of capsule consist of dot functions*/
/*Fully encapsulation class: all the data members are private in other way we can 
access the data members inside the class not in the other class*/

/*Encapsulation: Information hiding(data hiding)*/
/*Encapsulation is used for security purposes and if we want we can make the class as read only, reuseability of code, readability of code*/


#include<iostream>
#include<cstring>
#include<string>
using namespace std;

class Student{
    private:
    string name;
    int age;
    int height;

    public:
    int ageAge()
    {
        return this->age;
    }
    int getheight()
    {
        return this->height;
    }

};

int main()
{
    Student first;
    cout<<"All good" <<endl;


    return 0;
}