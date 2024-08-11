//multilevel inheritance

#include<iostream>
using namespace  std;
class Animal{
  public:
  int age;
  int weight;

  public:
  void speak()
  {
    cout<<"speaking" <<endl;
  }
};

class Dog: public Animal{
    public:

 
};

class GermanShepherd: public Dog{
 public:
};

int main()
{
    GermanShepherd d;
    d.speak();
    
} 
