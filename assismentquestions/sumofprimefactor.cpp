#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum=0,l=0;
    cout<<"enter the no:";
    cin>>n;
    int arr[10];
    int brr[10];
    int i,j=0;
    for(i=2;i<n;i++)
    {
      if(n%i==0)
      {
          arr[j]=i;
          j++;
      }
    }
    for(int i=0;i<j;i++)
    {  
        int count=0;
        for(int k=1;k<=arr[i];k++)
        {   
            if(arr[i]%k==0)
            {
            count++;
            } 
        }
        if(count==2)
        {
          brr[l]=arr[i];
          l++; 
        }
    }
    for(int p=0;p<l;p++)
    {
        sum=sum+brr[p];
    }
   
    cout<<"sum is : "<<sum;
    return 0;
}