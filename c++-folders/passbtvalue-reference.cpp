//pass by value and pass by reference in c++

#include<iostream>
using namespace std;

//pass by value
// void dosomething(int num)
// {
//     cout<< num <<endl;
//     num  = num + 5;
//     cout<<num <<endl;
//     num = num + 5;
//     cout<< num <<endl;
// }

//pass by reference
void dosomething(string &s)
{
    s[0]='t';
    cout<<s <<endl;
}


int main()
{
    string s= "ayesha";
    dosomething(s);
    cout<<"Value of string :"<< s <<endl;
    // int num=10;
    // dosomething(num);
    // cout<< num <<endl;


    return 0;
}