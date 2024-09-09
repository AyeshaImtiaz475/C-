//1. check if a number is prime or not 

#include<iostream>
using namespace std;

//check is prime number
bool isPrime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

//2. print all prime numbers from 2 to N
bool Printprime(int n)
{
    for(int i=2; i<=n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
        return true;
    }
}

//fibonacci series of a number 
int fibonacci(int n)
{ 
    if(n == 0) return 0;
    if(n == 1) return 1;
     int num1 = 0;
    int num2 = 1;
    int result;
    for(int i=2; i<=n; i++) 
    {
       result = num1 +num2;
       num1 = num2 ;
       num2 = result;
    }
    return num2;
}

int main()
{
    // bool result = isPrime(5);
    // if(result)
    // {
    //     cout<<"is a prime number" <<endl;
    // }
    // else
    // {
    //     cout<<"is not a prime number" <<endl;
    // }
    
    // int n = 20;
    // for(int i=1; i<=n; i++)
    // {
    //     if(Printprime(i))
    //     {
    //         cout<<i <<" ";
    //     }
    // }

    int n = 10;
    for(int i=0; i<n; i++)
    {
        cout<<fibonacci(i)<<endl;
    }
    return 0;
}