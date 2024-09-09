//Functions Syntax

#include<iostream>
using namespace std;

//Parameters 

//functiond definition
int printhello()
{
    cout<<"Hello\n";
    return 3;
}

//sum of 2 number 
int sum(int a, int b)
{
    int s= a + b;
    return s;
}

//min of 2 numbers 
int MinNumber(int a, int b) //parameters 
{
    if(a < b)
    {
        cout<<"a is minimum :" << a <<endl;
    }
    else{
         cout<<"b is minimum :" << b <<endl;
    }
}

//Calcualte the sum 1 - n
int TotalSum(int n)
{
    int sum=0;
    for(int i=1; i<n; i++)
    {
       sum = sum+ i;
    }
    return sum;
}

//calculate N factorial 
// int factorial(int facInitial )
// {
//      int fac=1;
//      for(int i=1; i<=facInitial; i++)
//      {
//         fac = fac* i;
//      }
//      return fac;
// }

//function in Memory
//System memory (stack: static allocation), heap(dynamic allocation)
//If we make the function it always lies on the top of stack if we 
//delete it then it's not possible to call the function in main function

//any statment declare after the return value not executed. 
//return -> control 

//Pass by Value: copy of argument is passed to function 
//primitive data type : pass by value

int ChangeX(int x)
{
   x = 2 * x;
   cout<<" x =" << x <<endl;
}

//Calcualte of sum of digits of a number 
//1. take number % 10 (to get last digit)
//2. num = num / 10; (get the reamining number)

int sumDigit(int num)
{
    int digSum = 0;
    while(num > 0) //0>0
    {
        int lastDigit = num % 10; //0
        num = num/ 10;   //0
        digSum = digSum + lastDigit; //6 + 5 + 4 + 3 + 2= 20
    }
    return digSum;
}

//calcaulte nCr binomial coefficient for n & r
//nCr = n!/ r!(n-r)!
int factorial(int n )
{
     int fac=1;
     for(int i=1; i<=n; i++)
     {
        fac = fac* i;
     }
     return fac;
}
int binomialFun(int n, int r)
{
    int fact_n = factorial(n);
    int fac_r = factorial(r);
    int fac_nmr = factorial(n-r);

    return   fact_n/ (fac_r * fac_nmr);
    
}

int main()
{
    //function invoke/call
    // int value = printhello();
    // cout<<value <<endl;

    // int mysum = sum(5,6);
    // cout<<"Sum is :" <<mysum;

    // int minNum = MinNumber(12, 10); //arguments 
    // cout<<minNum;

    //cout<<TotalSum(10) <<endl;

    //cout<<factorial(4);

    //PASS BY VALUE //
    // int x= 5;
    // ChangeX(x);

    // cout<<"x =" << x<<endl;

    //cout<<sumDigit(23456) <<endl;
    int n = 6, r = 2; 
    cout<< binomialFun(n, r);
    
    return 0;
}