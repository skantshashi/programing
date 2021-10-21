#include<bits/stdc++.h>
using namespace std;
int FindNum(int n)
{
    int s=0,r;
    if(n>26)
    {
        while (n!=0)
        {
            r=n%10;
            s+=r;
            n=n/10;
        }
        return FindNum(s);
    }
    else
    return n;
}
int main()
{
    int n,r,s=0,ans;
    cin>>n;
    while (n!=0)
    {
        r=n%10;
        s+=r;
        n=n/10;
    }
    ans=FindNum(s)+64;
    cout<<(char)ans;
    return 0;

}