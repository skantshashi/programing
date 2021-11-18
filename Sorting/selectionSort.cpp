#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
void SelectionSort(int A[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(A[j]<A[k])
            {
                k=j;
            }
        }
        swap(&A[i],&A[k]);
    }
}
int main()
{
 int A[]={11,13,7,12,16,9,24,5,10,3},n=10,i;
  
for(i=0;i<10;i++)
 printf("%d ",A[i]);
 cout<<endl;
 
 //insertion sort
 for(int i=1;i<n;i++){
     int current=A[i];
     int j=i-1;
     while (j>=0 && current <A[j])
     {
        A[j+1]=A[j];
        j--;
     }
     A[j+1]=current;

 }
 
 for(i=0;i<10;i++)
 cout<<A[i]<<" ";
 return 0;
}