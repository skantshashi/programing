#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter a string :";
   string str="";
   cin>>str;
   string rev="";
   int len=(int)str.length();
   rev.resize(len);
   for(int i=0,j=len-1;i<len;i++,j--)
   {
       rev[i]=str[j];
   }
   rev[len]='\0';
   if(str.compare(rev)==0)
   {
       cout<<"palindrome";
   }
   else{
       cout<<"not a palindrome";
   }
   return 0;
}