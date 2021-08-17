#include<bits/stdc++.h>
using namespace std;
class rectangle
{
    private:
           int length;
           int breadth;
    public:
   /* rectangle()
    {
        length=0;
        breadth=0;
    }*/
    rectangle(int l=0,int b=0)
    {
       
       length=l;
       breadth=b;
    }
    rectangle( const rectangle&rect)
    {
        length=rect.length;
        breadth=rect.breadth;
    }
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
    //rectangle r;  default parameter
    rectangle r(10,87);//call by parameter
 rectangle r2=r;//call by copy
 
 cout<<"length is : "<<r2.getLength()<<endl;
 cout<<"breadth is : "<<r2.getBreadth()<<endl;
 cout<<"area is : "<<r2.area();
 return 0;
}