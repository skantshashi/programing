#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter a no ";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) count++;
    }
    if(count==0) cout<<n<<" is a prime number";
    else cout<<n<<" is not a prime number";
    return 0;
}