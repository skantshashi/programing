#include<bits/stdc++.h>
using namespace std;
class innova
{
    public:
    static int price;
    public:
   int getPrice()
   {
       return price;
   }
};
int innova::price=30;
int main()
{
    innova a,b,c;
    cout<<a.getPrice()<<endl;
    cout<<b.getPrice()<<endl;

    cout<<innova::price;
}
