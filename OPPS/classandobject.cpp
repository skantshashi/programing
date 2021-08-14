#include<bits/stdc++.h>
using namespace std;
class rectangle 
{ 
    public:
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter ()
    {
        return 2*(length+breadth);
    }
}r1,r2; //or ;   and r1 and r2 declared on main function.
int main()
{
   // rectangle r1,r2;
    r1.length=10;
    r1.breadth=5;
    r2.length=15;
    r2.breadth=10;
    cout<<"area of rectengle :"<<r1.area()<<endl;
    cout<<"perimeter of rectangle : "<<r1.perimeter()<<endl;
    cout<<"area of rectangle :"<<r2.area()<<endl;
    cout<<"perimeter of rectangle :"<<r2.perimeter()<<endl;
    return 0;
}