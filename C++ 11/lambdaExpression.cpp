# include<iostream>
using namespace std;
    
/*program for lambda expression

*/
int main()
{
    int a=20;
    int b=34;
	[](int x,int y)
	{
	 	cout<<"sum is "<<x+y<<endl;
	}
	(10,30);
    [&a, &b](){cout<<a<<" "<<b<<endl;}();
    cout<<[](int x,int y)->int   
    {
        return x+y;
    }
    (25,76);// return type
    cout<<endl;
    [](){cout<<"hello";}();
}