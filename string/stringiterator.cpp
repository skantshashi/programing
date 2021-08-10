#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string str="$pt$po#$da$py";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++)
    {  
        if((*it)==str[3])
        {
            count++;
        }
        
    }
    cout<<"no of $ is :"<<count;
    return 0;

    
}