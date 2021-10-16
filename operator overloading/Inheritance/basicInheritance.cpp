#include<bits/stdc++.h>
using namespace std;
class Base
{
    public:
    int x;
    void show()
    {
        cout<<x<<endl;
    }
};
class Derived :public Base
{
  public:
  int y;
  void display()
  {
      cout<<x<<" "<<y<<endl;
  }
};
int main()
{
  Base b;
  b.x=15;
  b.show();
  Derived d;
  d.x=10;
  d.y=25;
  d.show();
  d.display();
  return 0;
}