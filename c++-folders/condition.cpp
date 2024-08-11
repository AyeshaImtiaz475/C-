#include<iostream>
using namespace std;

//write a program that takes an input of age and prints if you are adult or not
//if you are >= 18 year -> adult 
//if you are <=18 year -> you are not adult 

int main()
{
    int age;
    cout<<"Input your age :" ; 
    cin>>age;

    if(age> 18)
    {
       cout<<"You are an adult";
    }
    else if(age<10){
        cout<<"You are not an adult";
    }
    else{
        cout<<"You are also an adult";
    }

    return 0;
}