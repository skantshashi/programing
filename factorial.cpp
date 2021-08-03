#include<bits/stdc++.h>
using namespace std;
int main()
{
    int fact=1, n;
    cout<<"enter the no :";
    cin>>n;
    if( (n==0) )
    {   
        n=1;
        cout<<"factorial is :"<<n;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<"factorial is :"<<fact;
    }
    return 0;
}