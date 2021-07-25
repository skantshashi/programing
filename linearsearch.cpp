#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,key;
    cout<<"ennter value of n:";
    cin>>n;
    int arr[n];
    cout<<"enter the element of the array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key :";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(key==arr[i]){
            cout<<"key found at :"<<i;
            return 0;
        }
    }
    cout<<"key is not in the array .";
    return 0;
}