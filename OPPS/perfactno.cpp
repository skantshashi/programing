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
            j++;
        }
    }
  
  for(int i=0;i<j;i++)
  {
      sum=sum+arr[i];
  }
    if(sum==n)
    {
        cout<<"the no is perfect";
    }
    else cout<<"the is not perfect no";

    return 0;

}