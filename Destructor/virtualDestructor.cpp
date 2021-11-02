# include<iostream>
using namespace std;
    
/*program for  virtual destructor

*/
class base
{
public:
      base()
    {
        cout<<"base class constructor"<<endl;
    }
	virtual ~base()
	{
		cout<<"destructor of base"<<endl;
	}
};
class derived:public base
{
public:
     derived()
     {
         cout<<"derived class constructor"<<endl;
     }
	~derived()
	{
		cout<<"destructor of derived"<<endl;
	}
};
void fun()
{
	base *p=new derived();
	delete p;
    //derived d;
   // base b;
}
int main()
{
	fun();
}