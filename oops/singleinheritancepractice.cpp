//single inheritance in c++


#include<iostream>
using namespace std;

class Vehicle{
  public:
  Vehicle()
  {
    cout<<"This is a vehicle \n";
  }
};

class Car: public Vehicle{
   public:
   Car()
   {
    cout<<"This vechicle is car\n";
   }
};

int main()
{
    Car obj;
    return 0;
}