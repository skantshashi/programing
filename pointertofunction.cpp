#include<bits/stdc++.h>
using namespace std;
int max(int x ,int y)
{
    return x>y?x:y;
}
int min(int x ,int y)
{
    return x<y?x:y;
}
int main()
{ 
    int a,b;
    int (*p)(int ,int);
    p=max;
   a= (*p)(29,45);
   cout<<"max value : "<<a<<endl;
   p=min;
   b=(*p)(78,90);
   cout<<"min vlaue :"<<b;
   return 0;

}