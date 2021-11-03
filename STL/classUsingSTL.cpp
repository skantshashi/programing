# include<iostream>
# include<vector>
using namespace std;
    
/*program for stl class using vector

*/
int main()
{
	vector<int> v={2,4,6,8,10};
	v.push_back(20);
	v.push_back(31);
		cout<<"using for each loop"<<" ";
	for(int x:v)
		cout<<x<<" ";
	vector<int>::iterator itr;
	cout<<"using iterator "<<endl;
	for(itr=v.begin();itr!=v.end();itr++)
		cout<<++*itr<<" ";

}