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
        sum=sum*10+r;
        n=n/10;
       
     }
     if(temp==sum)
     {
         cout<<"no is palindrome .";
     }
     else
     {
         cout<<"no is not an palindrome :";
     }
     return 0;
     
 }