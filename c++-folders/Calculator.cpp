//calculator in C++
#include<iostream>
using namespace std;

int main()
{
    double num1 , num2;
    char op;
    
    cout<<"Enter the operator (+,-,/,*)" <<endl;
    cin>>op;
    
    cout<<"Enter the two number :" <<endl;
    cin>>num1 >> num2;
    
    switch(op)
    {
        case '+':
        cout<<num1 << op <<num2 <<"=" <<"Sum of two number :"<<num1 + num2 <<endl;
        break;
         case '-':
        cout<<num1 << op <<num2 <<"=" <<"Subtraction of two number :" <<num1 - num2 <<endl;
        break;
         case '/':
        cout<<num1 << op <<num2 <<"=" <<"Division of two number:" <<num1 / num2 <<endl;
        break;
         case '*':
        cout<<num1 << op <<num2 <<"=" <<"Multiplication of two number :" <<num1 * num2 <<endl;
        break;
        default:
        cout<<"Try again. You enter an invalid operator";
    }
    
    return 0;
}
