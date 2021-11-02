# include<bits/stdc++.h>
//# include<fstream>
using namespace std;
     
/*program for writing a file

*/
int main()
{
	ofstream ofs("my.text",ios::trunc);//ofstream  is class and ofs is a object
	ofs<<"john singh"<<endl;
	ofs<<25<<endl;
	ofs<<"cs"<<endl;
	ofs.close();
}