#include<iostream>
using namespace std;

int main()
{
    //Check if a number is prime or not 
    //first approach 
    //optimization 2 to underroot n (i*i<=n)
    //we can find the factors 
    //like for n=12, the factors are 1*12, 3*4, 4*3, 1*12 on the left side the fcators increase
    //on the right side the factor decrease also the number of element at n*n = under-root n repeated 
    //so we can optimized the code 
    // int n=20;
    // bool isPrime = true;

    // //for(int i=2; i<=n-1; i++)
    // for(int i=2; i*i<=n; i++)
    // {
    //     if(n%i == 0){
    //         //not a prime number
    //         isPrime = false;
    //         break;
    //     }
    // }
    // //find the prime number
    // if(isPrime == true)
    // {
    //     cout<<"Prime number\n";
    // }
    // else{
    //     cout<<"Non prime number\n";
    // }

    //nested loops
    int n=5;
    for(int i=1; i<=n; i++)
    {
        int m = 5;
        for(int j=1; j<=m; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}