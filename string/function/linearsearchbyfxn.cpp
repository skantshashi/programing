#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    if(key==arr[i])
       return i;
    return 0;
}
int main()
{
    int arr[]={1,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"enter the no searched :";
    cin>>key;
    int index=search(arr,size,key);
    if(index>0)
    cout<<"key found at index :"<<index<<endl;
    else 
    cout<<"key found at index :"<<"-1"<<endl;
    return 0;
}