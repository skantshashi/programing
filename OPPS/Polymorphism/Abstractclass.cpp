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

/* Abstract class 
• Class having pure virtual function is a abstract class
• Abstract class can have concrete also.
• Object of abstract class cannot be created
• Derived class can must override pure virtual function, otherwise it will also become a abstract 
class.
• Pointer of abstract class can be created
• Pointer of abstract class can hold object of derived class
• Abstract classes are used for achieving polymorphism
•
• Base class can be 
• Concrete
• Abstract with some concrete and some pure virtual functions
• All virtual functions*/