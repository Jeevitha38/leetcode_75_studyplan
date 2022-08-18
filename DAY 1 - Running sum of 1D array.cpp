//Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].



#include<iostream>
using namespace std;
int main()
{
    int num_of_array;
    cin>>num_of_array;
    int arr[num_of_array];
    for(int i=0;i<num_of_array;i++)
    {
        scanf("%d",&arr[i]);
    }
    cout<<arr[0];
    for(int i=1;i<num_of_array;i++)
    {
        arr[i]+=arr[i-1];
        cout<<' '<<arr[i];
    }
}
