#include<bits/stdc++.h>
using namespace std;
//function overiding : Redfine a  fxn of a base class in derived class
class Base
{
    public:
    void display()
    {
        cout<<"Display Base"<<endl;
    }
};
class Derived : public Base
{
   public:
   void display()
   {
       cout<<"Display derived"<<endl;
   } 
};
int main()
{
    Derived d;
    d.display();
    return 0;
}