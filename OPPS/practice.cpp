#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    int brr[5];
    int i=0,j=0;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0,j=0;i<5;i++)
    {

        if(arr[i]!=arr[i+1])
        {
            brr[j]=arr[i];
            j++;
        }
    }
    //int n=sizeof(brr)/sizeof(brr[0]);
    for(int k=0;k<j;k++)
    {
        cout<<brr[k]<<" ";
    }  
    return 0;
}