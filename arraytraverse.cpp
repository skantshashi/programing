#include<bits/stdc++.h>
using namespace std;
int main()
{
    int max;
    int arr[]={1,2,30,4,5,69,7,8};
    max=arr[0];
    for(int i=0;i<8;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"max element value :"<<max;
    return 0;
}