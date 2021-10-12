#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=0,sum=0;
    cout<<"enter a no :";
    cin>>n;
    int arr[10];
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            arr[j]=i;
            sum=sum+arr[j];
            j++;
        }
    }
    if(sum==n) cout<<n<<" is a perfect no";
    else cout<<n<<" is not a perfect no";
    return 0;
}