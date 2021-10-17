#include<bits/stdc++.h>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Default as Base"<<endl;
    }
    Base(int x)
    {
        cout<<"param as Base "<<x<<endl;
    }
};
class Derived : public Base
{
    public:
    Derived()
    {
        cout<<"Default as Derived "<<endl;
    }
    Derived(int a)
    {
        cout<<"param as Derived "<<a<<endl;
    }
    Derived(int x, int a):Base(x)
    {
        cout<<"param as Derived "<<a<<endl;
    }
};
int main()
{
    Derived d;
    Base b;
    Derived g(10);
    Base c(5);
    Derived h(15,45);
    return 0;
}