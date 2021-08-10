#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1 = "qwdergvdfgtsc";
    string str2 = "edqqagdrgafrq";
    int count1=0,count2=0;
    for(int i=0;str1[i]!='\0';i++)
    {
        if((str1[i]=='f') || (str1[i]=='r')||(str1[i]=='q')||(str1[i]=='e')||
        (str1[i]=='d')||(str1[i]=='g'))
        {
            count1++;
        }
    }
        for(int i=0;str2[i]!='\0';i++)
    {
        if((str2[i]=='f') || (str2[i]=='r')||(str2[i]=='q')||(str2[i]=='e')||
        (str2[i]=='d')||(str2[i]=='g'))
        {
            count1++;
        }
    }
    cout<<"No. of matching characters are :"<<count1;
    return 0;

}