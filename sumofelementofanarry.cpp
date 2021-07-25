#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    int arr[]={1,3,5,8,67,34,3};
    for(int i=0;i<7;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"sum of the element of array :"<<sum;
    return 0;
}