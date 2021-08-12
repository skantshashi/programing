#include<bits/stdc++.h>
using namespace std;
int swap( int a, int b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<"value of a and b :"<<a<<" "<<b<<endl;
}
int main()
{
    int x=10,y=70;
    swap(x,y);
    cout<<x<<endl<<y;
    return 0;
}