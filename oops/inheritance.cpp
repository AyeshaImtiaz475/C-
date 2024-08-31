#include<iostream>
#include<string>

using namespace std;

class Person{
    public:
    string  name;
    int age;

    Person(string name, int age)
    {
        this -> name = name;
        this -> age = age;
    }

    Person()
    {
       cout<<"Parent constructor " <<endl;
    }
    ~Person()
    {
        cout<<"Parent destructor " <<endl;
    }
};

//inheritance 
class Student: public Person{
   public:
   int rollno;

   Student(string name, int age, int rollno): 
   Person(name,age)
   {
     this -> rollno = rollno;
   }

    Student(){
    cout<<"Child constructor " <<endl;
   }
   ~Student (){
     cout<<"Child destructor "<<endl;
   }

   void getInfo()
   {
    cout<<"name :" <<name <<endl;
    cout<<"age  :" <<age <<endl;
    cout<<"roll no:" <<rollno <<endl;
   }
   
};

int main()
{
    Student s1("Ayesha Imtiaz", 21 ,1234);

    s1.getInfo();
    return 0;
}