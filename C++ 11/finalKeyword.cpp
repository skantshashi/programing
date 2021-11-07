# include<iostream>
using namespace std;
    
/*program for final keyword

*/
class parent //final * if we use a final keyword we can't derived child class
{
    public:
   virtual void show() //final
	{ cout<<"base class"<<endl;}
};
class child: public parent
{
    public:
	void show()
	{cout<<"deriver class"<<endl;}
};
int main()
{
    child p;
    p.show();
}