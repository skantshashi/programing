#include<bits/stdc++.h>
using namespace std;
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void bubblesort(int A[], int n)
{
    int i,j,flag;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(A[j],A[j+1]);
                flag=1;

            }
        }
        if(flag==0)
           break;
    }
}
int main()
{
    int i,n=6;
    int A[6]={7,6,34,8,2,8};
    bubblesort(A,n);
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    int a=10,b=20;
    swap(a,b);
    cout<<"a= "<<a<<" b= "<<b;
    return 0;
}