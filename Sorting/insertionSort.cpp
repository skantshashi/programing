#include<bits/stdc++.h>
using namespace std;

void insertionsort(int A[],int n)
{
    int i,j,x;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x=A[i];
        while (j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;   
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
    insertionsort(arr,n);
    cout<<" after sorting array :";
    for(auto a:arr)
       cout<<a<<" "; 
       return 0;
}