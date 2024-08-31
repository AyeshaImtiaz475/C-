//compile time polymorphism 

#include<iostream>
using namespace std;

class Geeks{
   public:
   void func(int x)
   {
    cout<<"Value of x is :" << x <<endl;
   }

   void func(double x)
   {
    cout<<"Value of x is :" << x<<endl;
   }

    void func(int x, int y)
    {
        cout<<"Value of x and y is :" << x <<" ," << y << endl;
    }
   
};

int main()
{
    Geeks obj1;
    obj1.func(7);  //int parameter  function 1
    obj1.func(9.123);  //double parameter function 2
    obj1.func(86, 32);  //int x, int y parameter 


    return 0;
}