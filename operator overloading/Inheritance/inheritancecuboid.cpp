#include<bits/stdc++.h>
using namespace std;
class rectangle
{
    private:
    int breadth;
    int length;
    public:
    rectangle(int l=0, int b=0 )
    {
        length=l;
        breadth=b;
    }
    void setlenght(int l)
    {
        if(l<0) length=0;
        else length=l;
    }
    void setbreadth(int b)
    {
        if(b<0) breadth=0;
        else breadth=b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int perimeter()
    {
        return 2*(getlength() +getbreadth());
    }
    int area()
    {
        return length*breadth;
    }
};
class cuboid : public rectangle
{
    private:
    int height;
    public:
    cuboid(int l=0,int b=0,int h=0)
    {
        setlenght(l);
        setbreadth(b);
        height=h;
    }
    void setheight(int h)
    {
        if(h<0) height=0;
        else height=h;
    }
    int getheight()
    {
        return height;
    }
    int volume()
    {
        return getlength()*getbreadth()*height;
    }
 
};
int main()
{
    cout<<"for base class rectengle "<<endl;
    rectangle r;
    r.setbreadth(25);
    r.setlenght(10);    
    cout<<r.getbreadth()<<endl;
    cout<<r.getlength()<<endl;
    cout<<"area "<<r.area()<<endl;
    cout<<"perimeter "<<r.perimeter();

    cout<<"for base for Derived class "<<endl;
    cuboid c(10,12,15);
    cout<<"height "<<c.getheight()<<endl;
    cout<<c.perimeter()<<endl;
    cout<<c.area()<<endl;
    cout<<"volume "<<c.volume()<<endl;
    return 0;

}