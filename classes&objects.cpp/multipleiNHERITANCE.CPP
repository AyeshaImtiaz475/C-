//multipleinheritance 

#include<iostream>
using namespace std;


class Animal{
  public:
  int age;
  int weight;

  public:
  void bark()
  {
    cout<<"Barking" <<endl;
  }
};

class Human{
 public:
 string color;

 public:
 void speak()
 {
    cout<<"speaking" <<endl;
 }

};

class Hybrid: public Animal, public Human{
 public:

};

int main()
{
    Hybrid obj1;
    obj1.speak();
    obj1.bark();

    return 0;
}
