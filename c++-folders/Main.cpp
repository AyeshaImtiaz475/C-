#include<iostream>
using namespace std;

int main()
{
  cout<<"Ayesha" <<endl;
  cout<<"Imtiaz" <<endl;
  cout<<"hello world" <<"\n" ;
  
  
   //variables 
  //variable name always start withunderscore, a-z(A-Z)
  //Data Types -Primitive
  //int(contain only integer + positive , negative values)
  // char, float, bool, double
  
  int age = 25;
  cout<< age <<endl;
  
  //integer - 4 Bytes
  //single digit -> 1 bit
  //8 bits -> Bytes
  //we have 32 bits to store the Data
  cout<<"Size of age is:" <<sizeof(age) <<endl;
  
  
  //ch -> 1 Bytes
  char grade = 'F';
  cout<<"Character value is :" <<grade <<endl;
  
  //ASCII -> American Standard Code of Information Interchange
  //charc ASCII values are converted into 0/char16_t
  
  //we used float to store the decimal value 
  float PI = 3.14F;
  //we add F because compiler consider we want to add other values
  cout<<"Float value is:" <<PI <<endl; 
  
  //boolean true(1) -false(0)
  bool isSafe = true;
  cout<< isSafe << endl;
  
  //double -> 8 Bytes
  double price = 100.99;
  cout<<"Double value is:" <<price <<endl;
  
  //Tye Casting
  //typeconversion(implicit) -> automatically done
  //casting
  
  //tyeconversion
  char myGrade = 'a'; //97
  int value = myGrade;
  cout<<"Value is:" <<value <<endl;
  
  //casting -> done by manually programmer
  double myPrice = 111.99;
  int newPrice = (int)myPrice;
  cout<<"New price is:" <<newPrice <<endl;
  
  int myCurrentAge;
  //cout<<"Input your current age :" ;
  //cin>>myCurrentAge;
  
  //cout<<"My current age is:" <<myCurrentAge <<endl;
  
  
  //operators 
  //Arthimetic operators
  int a = 10, b = 5;
  cout<<"sum"  << (a + b) <<endl;
  cout<<"Difference :" <<(a-b) <<endl;
  cout<<"Multiplication :" <<(a * b) <<endl;
  cout<<"Division :" <<(a/b) <<endl;
  
  int x = 5;
  double y = 2;
  cout<< (5/2) <<endl;
  
  cout<< (6 /(double) 2) <<endl;
  
  //Relational operator
  //<,>,<=,>=
  // ==, !=
  
  cout<<(3 < 5) <<endl;
  cout<<(3 > 5) <<endl;
  cout<<(3 <= 3) <<endl;
  cout<<(3 == 3) <<endl;
  cout<<(3 != 5) <<endl;
  
  //logical operator
  //OR, ||, AND, NOT 
  cout<<!(3 > 1) <<endl;
  
  //Sum of two number
  int num1 =5;
  int num2 = 6;
  int mySum = num1 + num2;
  cout<<"Sum of two number:" << mySum <<endl;
  
  //unary operators
  //Increment ++; decrement --;
  int c= 10;
  //int d = c++; //kaam ; update
  int d = ++c; //update; kaam
  cout<< c <<endl;
  cout<<d <<endl;
  
  return 0;
}


//; -> terminator 
//Code.cpp file -> compiler -> code.exe 