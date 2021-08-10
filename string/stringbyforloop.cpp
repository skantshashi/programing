#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
 string str="skantshashi";
 for(int i=0;str[i]!='\0';i++)
 {
     if(str[i]==str[0])
     {
         count++;
     }
 }
 cout<<count;
    return 0;
}