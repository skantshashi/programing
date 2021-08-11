#include<bits/stdc++.h>
using namespace std;
int main()
{
    string email="skantshashi2016@gmail.com";
    int i=email.find('@');
    string username=email.substr(0,i);
    cout<<"username is :"<<username;
    return 0;
}