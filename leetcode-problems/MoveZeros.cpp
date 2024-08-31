#include<iostream>
using namespace std;

int MoveZeros(int nums[], int n)
{
     int j=0; 
    for(int i=0; i<n; i++)
    {
     if(nums[i] != 0)
    {
        nums[j] = nums[i];
        j++;
    }
    }
    while(j <n)
    {
        nums[j]=0;
        j++;
    }
    
}

int main()
{
    int nums[] ={0,0,12};
    int n= sizeof(nums)/sizeof(nums[0]);

    MoveZeros(nums, n);

    for(int i=0; i<n; i++)
    {
        cout<< nums[i] <<" ";
    }
    cout<<endl;

    return 0;
}
