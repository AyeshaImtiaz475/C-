#include<iostream>
#include<string>
using namespace std;

//abstract class just give an idea 

class Shape{ //virtual added then pure virtual function 9abstract class)
  public:
  virtual void draw() =0;
};

class Circle : public Shape{
 public:
 void draw()
 {
   cout<<"Drawing a circle" <<endl;
 }
};

int main()
{
    Circle c1;
    c1.draw();
    return 0;
}