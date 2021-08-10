#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="today";
    string::reverse_iterator it;
    for(it=str.rbegin();it!=str.rend();it++)
    {
        *it=*it-32;
      cout<<*it;
    }
    cout<<str;
    return 0;
}