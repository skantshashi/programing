#include<bits/stdc++.h>
using namespace std;
class base
{
    public:
    virtual void fun1()=0;
    virtual void fun2()=0;
};
class derived : public base
{
    public:  
    void fun1()
    {
       cout<<"fun1 derived"<<endl;
    } 
   void fun2()
   {
       cout<<"fun2 derived"<<endl;
   } 
};
int main()
{
    derived d;
    d.fun2();
    //base b; because base in an abstract class but we can call by using  base class pointer
    base*p=new derived();
    p->fun1();

}