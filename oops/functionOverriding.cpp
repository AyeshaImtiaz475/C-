#include<iostream>
#include<string>
using namespace std;

class Parent{
 public:
 void getInfo()
 {
    cout<<"parent class" <<endl;
 }
};

class child: public Parent{
  public:
  void getInfo()
  {
    cout<<"Child class"<<endl;
  }
};

int main()
{ 
    Parent p1;
    p1.getInfo();

    return 0;
}