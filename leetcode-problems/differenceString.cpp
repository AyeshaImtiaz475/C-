//difference string 

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

char differenceString(string s, string t)
{
       int total=0;
       for(int i=0; i<t.length(); i++)
       {
          total = total + t.at(i);
       }   

       for(int i=0; i<s.length(); i++)
       {
        total = total - s.at(i);
       }

       return (char)total;
}

int main()
{
    string s="pqrs";
    string t="pqrst";

    cout<<differenceString(s, t);


    return 0;
}

