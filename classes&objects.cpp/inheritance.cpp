/* Getting the properties from parent class to the derived class 
is called inheritance*/

/* class Parent{
};

class child:public parent{
};*/

#include<iostream>
using namespace std;

class Human{
 public:
 int height;
 int weight;
 private:
 int age;

 public:
 int getAge()
 {
    return this->age;
 }
 int setWeight(int w)
 {
    this->weight=w;
 }
};
/* The proected is same as private class but the child class can use the parent*/
class Male: public Human{
  public:
   string color;

   void sleep()
   {
       cout<<"Male sleeping" <<endl;
   }
};

int main()
{
    // Male m1;
    // cout<< m1.height <<endl;
    // Male object1;
    // cout<<"Male age is :" << object1.age <<endl;
    // cout<<'Height is :' <<object1.height<<endl;
    // cout<<"Weight is :" <<object1.weight <<endl;

    // object1.setWeight(80);
    // cout<< "Weight original is :" <<object1.weight <<endl;
    // cout<<"Color is:" <<object1.color <<endl;

    // object1.sleep();

    return 0;
}


/*
mode of inheritance:
1. public (base class members) -> public(class)  -> public
2. public (base class members) -> private(class)  -> private
3. public (base class members) -> protected(class)  -> protected
4. protected (base class members) -> public(class)  -> protected
5. procted (base class members) -> protected(class)  -> private
6. private (base class members) -> public(class)  -> Not accessible
7. private (base class members) -> protected(class)  -> NA
8. private (base class members) -> private(class)  -> NA
*/