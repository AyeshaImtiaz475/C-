#include<iostream>
#include<string>
using namespace std;


class Circle{
   private:
   float area;
   float radius;

   public:
   void getRadius()
   {
    cout<<"Enter radius :" <<endl;
    cin>>radius;
   }
   void findArea()
   {
    area = 3.14 * radius * radius;
    cout<<"Area of circle = " << area <<endl;
   }
};


int main()
{
    Circle c1;
    c1.getRadius();
    c1.findArea();

    return 0;
}