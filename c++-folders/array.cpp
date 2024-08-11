//array in c++
//when we had to used the array? When we had the multiple elements with similar data types
//indices start with 0 and the array size will be presented by box 

#include<iostream>
using namespace std;

int main()
{
    // int arr[5];
    // cin>>arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
     
    // //indices 
    // cout<<arr[0]<<" "<< "\n";
    // cout<<arr[1]<<" "<< "\n";
    // cout<<arr[2]<<" "<< "\n";
    // cout<<arr[3]<<" "<< "\n";
    // cout<<arr[4]<<" "<< "\n";

    //2D array 
    int arr[3][5]; //arr[3] = row(no of rows) , arr[5]=column (no of elements )
    arr[1][3] = 78;
    arr[1][2] = 89;
    arr[1][1] = 12;
    cout<< arr[1][3]<<" " <<"\n";
    cout<<arr[1][2]<<" " <<"\n";
    cout<<arr[1][1]<<" " <<"\n";

    return 0;
}