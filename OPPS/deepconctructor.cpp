#include<bits/stdc++.h>
using namespace std;
class test
{
   public:
    int a;
    int *p; 
  
   test(int t)
   {
    a=t;
    p=new int[a];
   }
};
int main()
{
    test r(5);
    cout<<r.a<<endl;
    return 0;

}