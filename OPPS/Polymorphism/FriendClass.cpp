#include<bits/stdc++.h>
using namespace std;
class your;
class my
{
    private:
    int a=90;
    friend your;
};
class your
{
    public:
    my m;
    void fun()
    {
        cout<<m.a;
    }
};
int main()
{
    your y;
    y.fun();
}

