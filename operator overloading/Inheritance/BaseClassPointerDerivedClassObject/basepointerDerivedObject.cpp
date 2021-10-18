# include<iostream>
using namespace std;
    
/*program for demo#2-base class pointer derived class object*/
class rectangle
{
public:
	void area()
	{
		cout<<"area of rectangle"<<endl;
	}
};
class cuboid:public rectangle
{
public:
	void volume()
	{
		cout<<"cuboid volume"<<endl;
	}
};
int main()
{
	rectangle r;
	//cuboid *q=&r; Derived class pointer and base class object is not possible. bcz base class has not the features of derived class

	cuboid c;
	c.area();
	c.volume();
    rectangle*p=new cuboid();
	p->area();
	//p->volume();		      
	return 0;
}