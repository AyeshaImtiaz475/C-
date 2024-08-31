//operator overloading in c++


#include<iostream>
using namespace std;


class Complex{
   public:
   int real , imag;

   public:
   //constructor parametrised
   Complex(int r=0, int i=0)
   {
    real = r;
     imag = i;
   }

   Complex operator+(Complex const& obj)
   {
     Complex result;
     result.real = real + obj.real;
     result.imag = imag + obj.imag;
     return result;
   }

   void print()
   {
    cout<<real <<" + i" << imag <<endl;
   }
};

int main()
{
     Complex c1(10,5), c2(2,  5);

     Complex c3 = c1 + c2;
     c3.print();

    return 0;
}