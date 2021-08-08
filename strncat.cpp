#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int mian()
{
    char s1[20]="hello";
    char s2[20]="shashi";
    char s3[20];
    int i=0,j=0;
   while(s1[i]!='\0')
   {
      s3[j]=s1[i];
      i++;
      j++;
   }
   i=0;
    while(s2[i]!='\0')
   {
      s3[j]=s2[i];
      i++;
      j++;
   }
   j='\0';
   cout<<"sum of two string is :"<<s3;
   return 0;
   
}