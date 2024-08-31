//encapsulation in c++

#include<iostream>
#include<string>
using namespace std;

class Person{
   private:
   string name;
   int age;

   public:
   Person(string name, int age)
   {
    this -> name = name;
    this -> age = age;
   }
   void setName(string name)
   {
    this -> name = name;
   }
   string getName()
   {
    return name;
   }
   void setAge(int age)
   {
    this -> age = age;
   }
   int getAge()
   {
    return age;
   }
};



int main()
{
    Person p1("Ayesha", 30);
    cout<<"First enter data :" <<endl;
    cout<<"Name :" <<p1.getName() <<endl;
    cout<<"Age :" <<p1.getAge() <<endl;

    p1.setName("Laiba");
    p1.setAge(32);
     
    cout<<"Updated info :" <<endl;
    cout<<"Name :" <<p1.getName() <<endl;
    cout<<"Age :" <<p1.getAge() <<endl;




    return 0;
}