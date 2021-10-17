#include<bits/stdc++.h>
using namespace std;
class Base
{
private:
    int a;
public:
   int b;
protected:
int c;
void funBase()
{
    a=20;//member function access all the access specifiers
    b=30;
    c=40;
}
};
class derived : public Base
{
    public:
    void funDerived()
    {
       // a=1;  // Derived class can access public and protected specifirs only
        b=2;
        c=3;
    }
};
int main()
{
    Base x;
  //  x.a=12;  outside the function only public class is accessible
    x.b=34;
    //x.c=45;
    return 0;
}