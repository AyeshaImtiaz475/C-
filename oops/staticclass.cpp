#include<iostream>
using namespace std;

// class A{
//   public:
//   int x;
  
//   void incX()
//   {
//     x = x +1;
//   }
// };

// int main()
// {
//     A obj1;
//     A obj2;

//     obj1.x = 100;
//     obj2.x = 200;

//     cout<<obj2.x <<endl;
//     return 0;
// }


class ABC {
 public:
 ABC (){
    cout<<"constructor" <<endl;
 }
 ~ABC (){
  cout<<"destructor" << endl;
 }
};

int main()
{
    if(true)
    {
      static  ABC obj;
    }
    cout<<"end of main function" <<endl;

    return 0;
}
//with out static keyword 
//constructor
//destructor
//main function 

//with static keyword 
//constructor
//end of main function
//destructor 
