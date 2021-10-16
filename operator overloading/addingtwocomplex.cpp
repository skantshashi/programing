#include<iostream>
using namespace std;
class complex
{
    public:
    int real;
    int img;
   
    complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    complex add(complex x)// or complex operator+(complex x)
    {
        complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
    
};
int main()
{
    complex c1;
    c1.real=29;c1.img=78;
    cout<<c1.real<<"+i"<<c1.img<<endl;
    complex c2;
    c2.real=2;c2.img=8;
    cout<<c2.real<<"+i"<<c2.img<<endl;
    complex c3;
    c3=c1.add(c2); /* c3=c1+c2;*/ 
    cout<<c3.real<<"+i"<<c3.img<<endl;
    return 0;
}