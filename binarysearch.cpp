#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int key;
    int l=arr[0];
    int h=arr[7];
    
    cout<<"enter a key : ";
    cin>>key;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(key==arr[mid])
        {
            cout<<"found at "<<mid;
            return 0;
        }
        else if(key < arr[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<"key not found ";
    return 0;
}