#include<bits/stdc++.h>
using namespace std;
class test
{
    private:
    int a;
    int b;
    public:
    static int count;
    test()
    {
        a=10;
        b=20;
        count++;
    }
};
int test::count=0;
int main()
{
    test t1;
    test t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;//static member  achived by using object of class 
    cout<<test::count;  //  achived by using class name
}
