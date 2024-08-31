#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int id;

    void getdetails()
    {
        cout<<"My name is :" << name <<endl;
        cout<<"The id is :" << id <<endl;
    }
};

int main()
{
    Person p1;
    p1.name = "ayesha";
    p1.id= 123;

    p1.getdetails();


    return 0;
}