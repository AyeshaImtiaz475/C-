#include<iostream>
using namespace std;

class Vehicle{
   public:
   void  piston()
   {
    cout<<"4 piston\n";
   }

   void manWhoMade()
   {
    cout<<"Markus Librette\n";
   }

   public:
   void company()
   {
    cout<<"GFG\n";
   }
   void model()
   {
    cout<<"Simple \n";
   }
   void color()
   {
    cout<<"Red/Green/Silver\n";
   }
   void cost()
   {
    cout<<"Rs. 80000 to 1000000\n";
   }
   void oil()
   {
    cout<<"Petrol\n";
   }
};

int main()
{  
    Vehicle obj;
    obj.company();
    obj.model();
    obj.color();
    obj.cost();
    obj.oil();

    return 0;
}