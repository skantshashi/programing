#include<bits/stdc++.h>
using namespace std;
int max(int a ,int b, int c)
{
    if((a>b) && (a>c)) return a;
    else if(b>c) return b;
    else return c;
}
int main()
{
    int a,b,c;
    cout<<"enter the no :";
    cin>>a>>b>>c;
    int v= max(a,b,c);
    cout<<"maximun  no is: "<<v;
    return 0;

}