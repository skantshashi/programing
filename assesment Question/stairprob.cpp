#include<bits/stdc++.h>
using namespace std;
int climb(int n) //for larger values of n TLE( time limit exit) occur like n=78
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 2;
    else return climb(n-1)+climb(n-2);
}
//we have to use the memorization method for less tym execution
long long int Climb(int n)
{
    int dp[n+2];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main()
{
    long long int n;
    cin>>n;
    int ways= Climb(n);
    cout<<ways;
    return 0;
}