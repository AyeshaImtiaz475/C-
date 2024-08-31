#include<iostream>
using namespace std;

void fun()
{
    static int x=0; //initalization statment -1 run 
    cout<<"x :" << x <<endl;
    x++;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}
//by adding the static variable then the x =0 will
// be created outside soe where 