#include<bits/stdc++.h>
using namespace std;
void bubblesort(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            int flag=0;
            if(A[j]>A[j+1])
            {
               int temp;
               temp=A[j];
               A[j]=A[j+1];
               A[j+1]=temp;
               flag=1;
            }
            if(flag==0) break;
        }
    }
}
int main()
{
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    cout<<"enter the values of array :";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<" before sorting array :";
    for(auto a:arr)
       cout<<a<<" ";
    cout<<endl;
    bubblesort(arr,n);
    cout<<" after sorting array :";
    for(auto a:arr)
       cout<<a<<" "; 
       return 0;
}