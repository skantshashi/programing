#include<bits/stdc++.h>
using namespace std;
class car
{
    public:
   virtual void start()
    {
        cout<<" start the car"<<endl;
    }
    virtual void stop()
    {
        cout<<"stop the car "<<endl;
    }
};
class innova : public car
{
   public:
   void start()
   {
       cout<<"start innova"<<endl;
   }
   void stop()
   {
       cout<<" stop innova"<<endl;
   }
};
class swift : public car
{
   public:
   void start()
   {
       cout<<"start swift"<<endl;
   }
   void stop()
   {
       cout<<" stop innova"<<endl;
   }
};
int main()
{
    car*p;
    p=new innova;
    p->start();
    p=new swift();
    p->start();
    return 0;
}