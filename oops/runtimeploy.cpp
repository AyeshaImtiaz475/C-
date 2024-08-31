//run time ploymorphism 

#include<iostream>
using namespace std;

class Animal{
   public:
   string color = "Black";
};

class Cat: public Animal{
  public:
  string color = "brown";
};

int main()
{
   Animal c = Cat();
   cout<<c.color;
    return 0;
}