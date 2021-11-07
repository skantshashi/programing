#include<bits/stdc++.h>
using namespace std;
class test
{
    int x;
    int y;
    public:
    test(int a, int b)
    {
        x=a;
        y=b;
    }
    test():test(1,1)
    {}
    void display()
    {
        cout<<"x "<<x<<" "<<"y "<<y;
    }

};
int main()
{
    test t;
    t.display();

}