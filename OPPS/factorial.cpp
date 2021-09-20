#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n>1)
    {
        return n*factorial(n-1);
    }
    else return 1;
}
int main()
{
    int n;
    cout<<"enter the no :"<<endl;
     cin>>n;
    int p=factorial(n);
    cout<<"factorial is:"<<p;
    return 0;
}