#include<bits/stdc++.h>
using namespace std;
int main()
{
   
   int C[2][3];
    cout<<" enter the no : ";
   for(auto& x:C)
   {
       for(auto& y:x)
       {
           cin>>y;
       }
   }
    for(auto& x:C)
   {
       for(auto& y:x)
       {
           cout<<y<<" ";
       }
       cout<<endl;
   }
   return 0;
}