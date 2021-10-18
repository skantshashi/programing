# include<iostream>
using namespace std;
    
/*program for nested or inner class

*/
class outer
{
    public:
    int a;
    static int b;
    
	void fun()
	{
		i.display();
        cout<<i.c<<endl;
	}
	class inner
	{
	public:
        int c=67;

		void display()
		{
			cout<<"display of inner"<<endl;
            //cout<<a;
            cout<<b<<endl;//inner class can access the static member of outer class
		}
	};
	inner i;
};
int outer::b=30;
int main()
{

    outer o;
    o.fun();
    cout<<o.b;
}