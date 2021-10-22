#include<bits/stdc++.h>
using namespace std;
int rob(int nums[],int n)
{
  if(n==1) return nums[1];
  if(n==2) return max(nums[0],nums[1]);
  int dp[n];
  dp[0]=nums[0];
  dp[1]=nums[1];
  for(int i=2;i<n;i++)
  {
      dp[i]=max(nums[i]+nums[i-2],nums[i-1]);
  }
  return dp[n-1];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int total = rob(arr, n);
    cout<<total;
    return 0;
}