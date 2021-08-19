#include<bits/stdc++.h>
using namespace std;
class rectangle
{
    int length;
    int breadth;
    public:
    void setLength(int l)
    {
        if(l<0)
        length=0;
        else
        length=l;
    }
    void setBreadth(int b)
    {
        if(b<0)
        length=0;
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
    int perimeter();
};
  int rectangle::perimeter()
  {
      return 2*(length+breadth);
  }
int main()
{
 rectangle r;
 r.setLength(8);   
 r.setBreadth(90);
 cout<<r.area()<<endl;
 cout<<r.perimeter();
 return 0;
}