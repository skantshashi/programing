# include<iostream>
using namespace std;
    
/*program for exception handling construct

*/
int main()
{
	int x=10,y=0,z;
	try
	{
		if(y==0)
			throw 1;
		z=x/y;
		cout<<z<<endl;
	}
	catch(int e)
	{
		cout<<"division by zero "<<e<<endl;
	}
	cout<<"bye program run successfuly"<<endl;
	return 0;
}