#include<bits/stdc++.h>
using namespace std;
class rectangle
{
    public:
    int len;
    int brd;
    
    int perimeter()
    {
        return 2*(len+brd);
    }
    int area()
    {
        return len*brd;
    }
};
int main()
{
    rectangle r;// creating object by stack 
    rectangle *p;
    p=&r;
    p->len=15;
    p->brd=10;
    cout<<"area is : "<<p->area()<<endl;
    //now creating object in heap memory by pointer 
    rectangle *ptr=new rectangle;
    ptr->len=15;
    ptr->brd=10;
    cout<<"perimeter of rectangle : "<<ptr->perimeter();


    return 0;
}