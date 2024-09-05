//conditional statments 

#include<iostream>
using namespace  std;

int main()
{
   // 1. check the number is positive or negative

    int n = -45;
    if(n >= 0)
    {
      cout<<"Positive number"<<endl;
    }
    else{
        cout<<"Negative number" <<endl;
    }  

    //2. check your age to vote 

    int age;
    cout<<"Input your age:" <<endl;
    cin>>age;

    if(age >= 18)
    {
        cout<<"Congradulation you can vote\n";
    }       
    else{
        cout<<"Sorry, you cannot vote\n";
    }

    //3. check the number is even or odd
    int number;
    cout<<"Input the number :" <<endl;
    cin>>number;
    if(number % 2 == 0)
    {
        cout<<number<< ": is even number\n";
    }
    else{
         cout<<number<< ": is odd number\n";
    }

    //4. Check the grades through percentages
    int marks;
    cout<<"Enter the marks :" <<endl;
    cin>>marks;

    if(marks >=90)
    {
        cout<<"Grade :" << "A" <<endl;
    }
    else if(marks>=80 && marks<90){
        cout<<"Grade :" << "B" <<endl;
    }
    else{
        cout<<"Grade :" <<"C\n";
    }

    //5. Find charcter lowercase or uppercase
    char ch;
    cout<<"Input the character :" <<endl;
    cin>>ch;

    if(ch>='a' && ch<='z')
    {
        cout<<"Character is in:" << "Lowercase\n";
    }
    else if(ch>='A' && ch<='Z')
    {
        cout<<"Character is in:" <<"Uppercase\n";
    }
    else{
        cout<<"OOOPS! You had enterthe invalid charcter\n"; 
    }

    //when we convert the character to its ASCII value (implicit conversion type)
    // Part b. 
     char c;
    cout<<"Input the character :" <<endl;
    cin>>c;

    if(c>=65 && c<=90)
    {
        cout<<"Character is in:" << "UpperCase\n";
    }
    else
    {
        cout<<"Character is in:" <<"LowerCase\n";
    }

    //Ternary Statments 
    int num= -45;
    cout<<(num>=0 ? "positive" : "negative")<<endl;

   
    return 0;
}
