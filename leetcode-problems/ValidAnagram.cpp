//find the valid anagram 

#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool ValidAnagram(string s, string t)
{
    int m= s.length();
    int n=t.length();

    if(m != n)
    {
        return false;
    }
    else{
        vector<int> count(26, 0);
        for(int i=0; i<m; i++)
        {
            count[s.at(i)-'a']++;
        }
        for(int i=0; i<n; i++)
        {
            count[t.at(i)-'a']--;
        }
        for(int i=0; i<26; i++)
        {
            if(count[i] != 0)
            {
                return false;
            }
        }
        return true;
    }


}

int main()
{
    string s="rat";
    string t="car";
    bool result = ValidAnagram(s,t);
    cout<<result <<endl;

    return 0;
}