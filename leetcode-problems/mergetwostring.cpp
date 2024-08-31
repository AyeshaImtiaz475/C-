//merge two string 
// word1 = "abcd", word2 = "efgh";
//result = "aebfchd"

#include<iostream>
#include<string>
using namespace std;

string MergeTwoString(string word1, string word2)
{
    string result="";

    for(int i=0; i<word1.length() || i<word2.length(); i++)
    {
        if(i<word1.length())
        {
            result = result + word1[i];
        }
        if(i<word2.length())
        {
            result = result + word2[i];
        }
    }
    return result;
}

int main()
{
    string str1 = "abcde";
    string str2="pqrstz";
    cout<<MergeTwoString(str1,str2);

    return 0;

}