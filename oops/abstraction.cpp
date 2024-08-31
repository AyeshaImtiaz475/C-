//abstraction
//implementation hiding 

//type of abstraction : data abstraction and control abstraction 

#include<iostream>
using namespace std;

class implementAbstraction{
   private:
   int a, b;

   public:
   void setvalue(int x, int y)
   {
        a=x;
        b=y;
   }
   void display()
   {
    cout<<"a = " << a<<endl;
    cout<<" b =" << b <<endl;
   }
};


int main()
{
    implementAbstraction obj;
    obj.setvalue(10,20);
    obj.display();



    return 0;
}