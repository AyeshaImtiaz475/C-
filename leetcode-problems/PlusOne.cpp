#include<iostream>
#include<vector>
using namespace std;

vector<int>PlusOne(vector<int> &digits)
{
    int idx = digits.size() -1;
    while(idx >= 0)
    {
        if(digits[idx] == 9)
        {
            digits[idx] = 0;
        }
        else{
            digits[idx] = digits[idx] + 1;
            return digits;
        }
        idx--;
    }
    //if the carry is on the -1 idx then we have to add the 1 at the start
    digits.insert(digits.begin(), 1);
    return digits;  
    //retun the modified vector array
}

int main()
{
    // vector<int> digits = {9,9,9};
    // vector<int> result = PlusOne(digits);

    // for(int i=0; i< result.size(); i++)
    // {
    //     cout<<result[i] <<" ";
    // }   
    // cout<<endl;
    // return 0;


}