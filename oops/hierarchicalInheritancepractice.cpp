#include<iostream>
using namespace std;

class Vehicle{
   public:
   Vehicle()
   {
    cout<<"this is a vehicle\n";
   }
};

class FourWheeler: public Vehicle{
   public:
   FourWheeler()
   {
    cout<<"this is a 4 wheeler\n";
   }
};

class Bus: public Vehicle{
     public:
     Bus()
     {
        cout<<"This is Vehicle Bus\n";
     }
};

int main()
{
    FourWheeler obj1;
    Bus obj2;
    return 0;
}