//heriarchial inheritance 

#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;
};

class Student: public Person{
   public:
   int rollno;

};

class Teacher : public Student{
    public: 
    double salary;
};


int main()
{
    Teacher t1;
    t1.name = "ayesha";
    t1.salary = 89000;

    cout<<"name :" <<t1.name <<endl;
    cout<<"salary :" <<t1.salary <<endl;
} 
