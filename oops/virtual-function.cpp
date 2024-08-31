#include<iostream>
#include<string>
using namespace std;

class Parent{
 public:
 void getInfo()
 {
    cout<<"parent class" <<endl;
 }
 virtual void hello()
 {
    cout<<"hello from parent" <<endl;
 }
};

class child: public Parent{
  public:
  void getInfo()
  {
    cout<<"Child class"<<endl;
  }
   void hello()
 {
    cout<<"hello from child" <<endl;
 }
};

int main()
{ 
    // Parent p1;
    // p1.getInfo();

    child c1;
    c1.hello();

    return 0;
}