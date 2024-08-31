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

class Car: public FourWheeler{
     public:
     Car()
     {
        cout<<"This is 4 wheeler vehical is a car\n";
     }
};


int main()
{
    Car obj;
    return 0;
}