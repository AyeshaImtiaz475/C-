#include<iostream>
#include<string>
using namespace std;

//function had the same name but different parameter
class Print{
 public:
 void show(int x)
 {
    cout<<" int :" <<x <<endl;
 }
 void show(char ch)
 {
    cout<<"char :" << ch <<endl;
 }
};

int main()
{
    Print p1;
    //p1.show(101);
    p1.show('&');

    return 0;
}