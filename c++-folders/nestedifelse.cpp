#include<iostream>
using namespace std;

/*
Take the age from the user and then decide accordingly
1. if age < 18
 print -> not eligible for job
2. If age >=1 8
print -> eligible for the job
3. If age>= 55 and age<=57,
print -> "eligible for job, but retirement soon."
4. If age > 57
print -> retirement time
*/

int main()
{
   int age;
   cout<<"Input the age :";
   cin>>age;

   if(age < 18)
   {
    cout<<"Not eligible for age";
   }
   else if(age >= 18 && age<= 54)
   {
    cout<<"Eligible for job";
   }
   else if(age >= 55 && age<= 57)
   {
    cout<<"Eligible for job, but retirement soon";
   }
   else 
   {
     cout<<"Retirement time ";
   }

    return 0;
}