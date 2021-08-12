#include<bits/stdc++.h>
using namespace std;
template<class T>
T max( T x ,T y)
{
    if(x>y)
    return x;
    else return y;
}  
int main()
{
    cout<<max(7,8)<<endl;
    cout<<max(7.8f,9.3f)<<endl;
    return 0;
}