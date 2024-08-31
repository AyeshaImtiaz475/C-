#include<iostream>
#include<string>
using namespace std;

bool repeatedSubstringPattern(string s)
{
    int n=s.length();
    for(int l=n/2; l>=1; l--)
    {
        if((n%l) == 0)
        {
            int times = n/l;
            
            string pattern = s.substr(0,l);
            string newStr= "";
            while(times--)
            {
              newStr = newStr + pattern;
            }
            if(newStr == s)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string s = "abcdabcdabc";
    bool result = repeatedSubstringPattern(s);
    cout<< (result ? "True" : "False") <<endl;

    return 0;
}