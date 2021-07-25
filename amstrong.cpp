#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int r, n,temp,sum=0;
     cout<<"enter a no :";
     cin>>n;
     temp=n;
     while (n>0)
     {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
     }
     if(temp==sum)
     {
         cout<<"no is amstrong .";
     }
     else
     {
         cout<<"no is not an amstrong :";
     }
     return 0;
     
 }