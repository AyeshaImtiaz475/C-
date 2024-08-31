//sign product of an array 
#include<iostream>
#include<vector>
using namespace std;

int arraySize(vector<int> &nums)
{
    int count=0;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i] < 0)
        {
             //count the value which is less than 0 (negative sign values)
             count++;
        }
        else if(nums[i] == 0)
        {
            //if there is any zero number in the array then the answer is 0
            return 0;
        }
    }
    return count%2 == 0 ? 1 : -1;
}

int main()
{
    vector<int> nums= {-1,-2,-3,-4,-5,0,3,2,1};
    cout<<arraySize(nums);
    return 0;
}