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
        cout<<"namespace second \n";
    }
}
namespace third
{
    void fun()
    {
        cout<<"namespace third";
    }
}
namespace fourth
{
    void fun()
    {
        cout<<"namespace third";
    }
}
int main()
{
    using namespace first;
    fun();
    using namespace second;
    second::fun();
    using namespace third;
    third::fun();
    using namespace fourth;
    fourth::fun();
    return 0;
}