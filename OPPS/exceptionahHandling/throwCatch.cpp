# include<iostream>
using namespace std;
    
/*program for throw and catch between function

*/
int division(int a,int b)
{
	if(b==0)
		throw 101;
	return a/b;
}	
int main()
{
	int x=10,y=0,z;
	try
	{
	 z= division(x,y);
	 cout<<z<<endl;
	}
	catch(int e)
	{
		cout<<"division by zero "<<e<<endl;
	}
	cout<<"bye"<<endl;
}