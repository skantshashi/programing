#include<bits/stdc++.h>
using namespace  std;
class base
{
    public:
   virtual void fun()
    {
        cout<<"fun of base"<<endl;
    }
};
class derived : public base
{
    public:
    void fun()
    {
        cout<<"fun of derived ";
    }
};
int main()
{
    base*p=new derived();
    p->fun();// if firtual keyword ,derived fxn is called.  else base fxn is called.its all depend on programmer hand
    return 0;
}