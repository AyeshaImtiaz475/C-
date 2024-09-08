//pattern questions 

#include<iostream>
using namespace std;

int main()
{
    //1. Square pattern 
    //easy with numebrs ; n=4;
    //1234
    //1234
    //1234
    //1234
    //L-R (row) , T-B (col)
    
    // int n=4;
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n; j++)
    //     {
    //         cout<< j<<" ";
    //     }
    //     cout<<endl;
    // }

    //  int n=4;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    //  int n=4;
    // for(int i=1; i<=n; i++)
    // {
    //     char ch='A';
    //     for(int j=1; j<=n; j++)
    //     {
    //         cout<< ch<<" ";
    //         ch = ch + 1;
    //     }
    //     cout<<endl;
    // }

     //2. 123
       // 456
       //789
    
    // int n=4;
    //  int num = 1;
    //  //if we want to don't reset the value of our variable then we don't declare the value inside the loops
    // for(int i=0; i<n ; i++)
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         cout<<num<<" ";
    //         num = num + 1;
    //     }
    //     cout<<endl;
    // }

    // int n= 3;
    // char ch= 'A';
    // for(int i=0; i<n; i++)  
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         cout<<ch<<" ";
    //         ch = ch+1;
    //     }
    //     cout<<endl;
    // }

    //Triangle pattern
    //*
    //* *
    //* * *
    //* * * *
    // int n=10;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<i+1; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //1
    //22
    //333
    //4444
    // int n= 10;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<i+1; j++)
    //     {
    //         cout<<(i+1) <<" ";
    //     }
    //     cout<<endl;
    // }

    //A
    //BB
    //CCC
    //DDDD

    // int n=5;
    // char ch='A';
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<i+1; j++)
    //     {
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    //     ch = ch+1;  //A, BB , CCC, DDDD
    // }

    //1
    //1 2
    //1 2 3
    //1 2 3 4
    // int n=10;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=1; j<i+1; j++)
    //     {
    //         cout<<j <<" ";
    //     }
    //     cout<<endl;
    // }

    //Reverse triangle pattern 
    //with n=4;
    //1
    // 2 1
    // 3 2 1
    //4 3 2 1

    //backward loop
    // int n=5;
    // for(int i=n; i>0; i--)
    // {
    //     cout<<i<<endl;
    // }

    // int n=4;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=i+1; j>0; j--)
    //     {
    //       cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //A
    //B A
    //C B A
    // int n=6;
    // char ch;
    // for(int i=0; i<n; i++)
    // {
    //      ch='A' + i;
    //     for(int j=i+1; j>0; j--)
    //     {
    //         cout<<ch <<" ";
    //         ch = ch - 1;
    //     }
    //     cout<<endl;
    // }
    //i=0, 1, 2, 3, 4, 5, 
    //j=0, 1, 2, 3, 4, 5, 
    //A
    //B A
    //C B A
    //D C B A
    //E D C B A
    //F E D C B A

    //Floy'ds trinagle pattern 
    //n=4;
    //1
    //2 3
    //4 5 6
    //7 8 9 10

    // int n=4;
    // int num = 1;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<i+1; j++)
    //     {
    //          cout<<num<<" ";
    //          num = num +1;
    //     }
    //     cout<<endl;
    // }

    // int n=7;
    // char ch='A';
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<i+1; j++)
    //     {
    //         cout<<ch<<" ";
    //         ch = ch + 1;
    //     }
    //     cout<<endl;
    // }

    //inverted triangle pattern
    //n = 4;
    //1 1 1 1 i=0
    //  2 2 2 i=1
    //    3 3 i=2
    //      4 i=3
    // space   num
    // 0       4 =n-i=4
    // 1       3 =n-i=3
    // 2       2 =n-i=2
    // 3       1 =n-i=1

    // int n= 4;
    // int num = 1;
    // for(int i=0; i<n; i++)
    // {
    //     //space 
    //     for(int j=0; j<i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     //number
    //     for(int j=0; j<n-i; j++)
    //     {
    //         cout<<(i+1);
    //     }
    //     cout<<endl;
    // }

    //  int n= 4;
    //  char ch = 'A';
    // for(int i=0; i<n; i++)
    // {
    //     //space 
    //     for(int j=0; j<i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     //number
    //     for(int j=0; j<n-i; j++)
    //     {
    //         cout<<ch;
    //     }
    //     ch = ch+1;
    //     cout<<endl;
    // }

    //Pyramid pattern
    //n=4;

      //        1        i=0
       //    1  2  1     i=1
        //1  2  3  2  1  i=2
    //1   2  3  4  3  2  1  i=3
    //1. loop for space
    //2. loop for num1
    //3. loop for num2 (backward loop)
    //no need to print the last space just ignore it 
    //n-i-1

    // int n=6;
    
    // for(int i=0; i<n; i++)
    // {
    //     //space; n-i-1
    //     for(int j=0; j<n-i-1; j++)
    //     {
    //         cout<<" ";
    //     }
    //     //nums1 : i+1;
    //     for(int j=1; j<=i+1; j++)
    //     {
    //         cout<<j;
    //     }
    //     //nums 2; we are printing i so i value start with 0
    //     for(int j=i; j>0; j--)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    //  int n=6;
    //  char ch;
    // for(int i=0; i<n; i++)
    // {
    //     //space; n-i-1
    //     for(int j=0; j<n-i-1; j++)
    //     {
    //         cout<<" ";
    //     }
    //     //nums1 : i+1;
    //     ch = 'A';
    //     for(int j=1; j<=i+1; j++)
    //     {
    //         cout<<ch; 
    //         ch = ch+1; 
    //     }
    //     //nums 2; we are printing i so i value start with 0
    //     ch = ch -2; //B-1 = A -1 = 0 
    //     for(int j=i; j>0; j--)
    //     {
    //         cout<<ch; 
    //         ch = ch-1; 
    //     }
    //     cout<<endl;
    // }


    //n= 4
    //             *
    //          *     *
    //      *            *
    //  *                  *
    //spaces = n-i-1
    //to print the odd spaces = 2 * i -1 
    //bottom part
    // outer loop: the lines are n-1 printed 

    int n= 4;
    //top part
    for(int i=0; i<n; i++)
    {
        //spaces 
        for(int j=0; j<n-i-1; j++)
        {
             cout<<" ";
        }
        cout<<"*";
        if(i != 0)
        {
            //spaces 
            for(int j=0; j<2*i-1; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    //bottom part
    for(int i=0; i<n-1; i++)
    {
        //spaces
        for(int j=0; j<i+1; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-2)
        {
            //spaces
            for(int j=0; j<2*(n-i)-5; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}