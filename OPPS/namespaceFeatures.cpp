#include<bits/stdc++.h>
using namespace std;
namespace first
{
    void fun()
    {
        cout<<"namespace first \n";
    }
}
namespace second
{
    void fun()
    {
        cout<<"namespace second";
    }
}
int main()
{
    using namespace first;
    fun();
    using namespace second;
    second::fun();
    return 0;
}