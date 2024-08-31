#include<iostream>
#include<string>

using namespace std;

class Student{
 public:
 string name;

 Student(){
  cout<<"non-parameterized";
 }

  Student(string name)
  {
    this -> name = name;
    cout<<"parameterized"<<endl;
  }
};

int main()
{
   // Student s1;  non-parametrized
   Student s1("ayesha");

    return 0;
}


