//monotonic function 
#include<iostream>
#include<vector>
using namespace std;

//the array element should be either increasing or decreasing order not in the same order at the same time 
bool isMonotonic(vector<int> &nums)
{
    int n=nums.size();
    bool increasing = false;
    bool decreasing = false;
    
    for(int i=0; i<n-1; i++)
    {
        //check the increasing order
        if(nums[i] < nums[i+1])
        {
            increasing = true;
        }
        else if(nums[i] > nums[i+1])
        {
            //check if the array element is in decreasing order
            decreasing= true;
        }
        
        if(increasing && decreasing)
        {
            return false;  //true && false -> false;
        }
    }
    return true; 
}

int main()
{
    vector<int> nums={6,5,4,4};
    bool result= isMonotonic(nums);
    if(result)
    {
        cout<<"The given array is monotonic "<<endl;
    }
    else 
    {
        cout<<"The given array is not monotonic" <<endl;
    }
    return 0;
}