#include <iostream>

using namespace std;

int main()
{
   for(int i=1;i<=5;i++)
   {
       for(int j=5;j>=i;j--)
       {
           cout<<j<<" ";
       }
        for(int k=i;k<=5;k++)
       {
           cout<<k<<" ";
       }
       cout<<endl;
   }
    return 0;
}