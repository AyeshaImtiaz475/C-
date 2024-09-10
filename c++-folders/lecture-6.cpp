//Binary Number System have total 2 digits (0/1) -> Base 2
//Decimal Number system have total 0-9 10 digits -> Base 10

//11001001 -------------> 123456789//
//OUR WHOLE CHAPTER IS CONSIST OF HOW TO CONVERT THE BINARY NO INTO DECIMAL AND DECIMAL TO DINARY //


//DECIMAL TO BINARY //
//DIVIDE THE NUMBER WITH 2 AND FIND THE REMINDER //
#include<iostream>
using namespace std;

// int decToBinary(int decNum)
// {
//     int ans = 0;
//     int pow = 1;

//     while(decNum > 0)
//     {
//         int rem = decNum % 2;
//         decNum = decNum/2;

//         ans = ans + (rem * pow);
//         pow = pow * 10;
//     }
//     return ans;
// }

//BINARY TO DECIMAL//
int binToDecimal(int binNum)
{
    int ans=0;
    int pow = 1;
    while(binNum > 0)
    {
        int rem = binNum % 10;
        ans = ans + (rem * pow);

        //update
        binNum /= 10;
        pow *= 2;
    }
    return ans ; //decimal form
}

int main()
{
    // int decNum = 5;
    // for(int i=1; i<=10; i++)
    // {
    //     cout<<decToBinary(i) <<endl;
    // }

    cout<<binToDecimal(101010) <<endl;
}
