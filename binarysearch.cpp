#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int key, l=0,h=7,mid=(l+h)/2;
    cout<<"enter a key : ";
    cin>>key;
    while(l<=h)
    {
        if(key==arr[mid])
        {
            cout<<"found at "<<mid;
            return 0;
        }
        else if(key < arr[mid])
        {
            h=mid-1;
            }
        else(key > arr[mid])
        {
            l=mid+1;
            }
    }
    cout<<"key not found ";
    
}