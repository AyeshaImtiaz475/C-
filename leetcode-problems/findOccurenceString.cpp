//find the first occurence in the string 

#include<iostream>
#include<string>
using namespace std;

int FirstOccurenceString(string haystack, string needle)
{
    //corenr case
    if(needle.length() > haystack.length())
    {
        return -1;
    }
    int haystackLength = haystack.length();
    int needleLength = needle.length();

    //find the first character 
    for(int i=0; i<=haystackLength-needleLength; i++)
    {
        //check the substring 
         if(haystack.substr(i, needleLength) == needle)
         {
            cout<<"Index found"<<endl;
            return i;    //return the index 
         }
    }
    return -1;
    //return -1 if not found 
}

int main()
{

    string haystack ="sadbutsad";
    string needle = "but";
    cout<< FirstOccurenceString(haystack,needle) <<endl;
}