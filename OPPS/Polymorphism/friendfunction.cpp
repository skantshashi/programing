#include<bits/stdc++.h>
using namespace std;
class test
{
    public: int a;
    protected: int b;
    private:int c;
    friend void fun();  //friend function allow the fun to access the all member of a class 
};
void fun()
{
    test t;
   int i= t.a=10;
   cout<<i<<endl;
   int l=t.b=20;
   cout<<l<<endl;
   int y=t.c=30;
   cout<<y;
}
int main()
{
   fun();
}