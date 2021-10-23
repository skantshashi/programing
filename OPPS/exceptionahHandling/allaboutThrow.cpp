# include<iostream>
using namespace std;
    
/*program for all about throw

*/
class myexception: exception //exception is builtin function in c++
{
	public:
	int a=20;
	void display()
	{
		cout<<a<<endl;
	}
};
int division(int a,int b)throw(myexception)//
{
	if(b==0)
		throw myexception();//can throw anything like int, float, string, char, object of an class
	return a/b;
}
int main()
{
	int x=10,y=0,z;
	myexception my;
	try
	{
		z=division(x,y);
		cout<<z<<endl;
	}
	catch(myexception e)
	{
		cout<<"division by zero "<<endl;
		my.display();
	}
	cout<<"bye"<<endl;
}