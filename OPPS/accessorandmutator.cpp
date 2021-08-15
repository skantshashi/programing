#include<bits/stdc++.h>
using namespace std;
class rectangle
{
    private:
           int length;
           int breadth;
    public:
    void setLength( int l)
    {
        if(l<0)
          length=0;
        else 
        length=l;
    }
    void setBreadth(int b)
    {
        if(b<0)
          breadth=0;
          else 
          breadth=b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
 rectangle r;//stack
 r.setLength(10);
 r.setBreadth(15);
 cout<<"length is : "<<r.getLength()<<endl;
 cout<<"breadth is : "<<r.getBreadth()<<endl;
 cout<<"area :"<<r.area()<<endl;
 cout<<"perimeter is : "<<r.perimeter()<<endl;
 rectangle *p=new rectangle();
 //using heap memory
 p->setLength(10);
 p->setBreadth(5);
  cout<<"length is : "<<p->getLength()<<endl;
 cout<<"breadth is : "<<p->getBreadth()<<endl;
 cout<<"area :"<<p->area()<<endl;
 cout<<"perimeter is : "<<p->perimeter()<<endl;
 return 0;
}