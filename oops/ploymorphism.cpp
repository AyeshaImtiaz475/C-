//ploy: many , morphism: forms (existing in multiple forms)
//types: run time , compile time 
//compile time: function overloading , operator overloading 

//if we want to reclare the function then function signature will be changed 
//function overloading
#include<iostream>
using namespace std;

class A{
 public:
 void sayHello()
 {
    cout<<"hello babbar bhai" <<endl;
 }
 void sayHello(string name)
 {
    cout<<"hello" <<name <<endl;
 }
  void sayHello(char name)
 {
    cout<<"hello" <<name <<endl;
 }
};

int main()
{
    A obj;
    obj.sayHello();

    return 0;
}