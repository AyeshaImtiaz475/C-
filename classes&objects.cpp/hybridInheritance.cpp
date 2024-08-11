//hybrid inheritance : combining of any of the two inheritance 

#include<iostream>
using namespace std;

class A{
  public:
  void func1()
  {
    cout<<"Inside function1 " <<endl;
  }
};

class B: virtual public A{
 public:
 void func2()
 {
    cout<<"Inside the function2 "<<endl;
 }
};

class C: public B{
 public:
 void func3()
 {
    cout<<"Inside function3 " <<endl;
 }
};



int main()
{
    A obj1;
    cout<<"The class A was called" <<endl;
    obj1.func1();

    B obj2;
    cout<<"The class B was called" <<endl;
    obj2.func1();
    obj2.func2();

    C obj3;
    cout<<"The class is called" <<endl;
    obj3.func1();
    obj3.func2();
    obj3.func3();

    return 0;
}


