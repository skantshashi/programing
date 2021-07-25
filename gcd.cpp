#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m ;
    cout<<"enter two no :";
    cin>>m>>n;
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else
        {
            n=n-m;
        }
    }
    cout<<"gcd of a no is :"<<m;
    return 0;
}