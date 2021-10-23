#include<bits/stdc++.h>
using namespace std;
class Stack
{
    private:
    int *stk;
    int top;
    int size;
    public:
    Stack(int sz)
    {
     size=sz;
     top=-1;
     stk=new int[sz];
    }
    void push(int x);
    int pop();
  
};

void Stack::push(int x)
{
   if(top==size-1)
      cout<<"Stack is full "<<endl;
    else
    {
        top++;
        stk[top]=x;
    }
}
int Stack::pop()
{
    int x=0;
    if(top==-1)
      cout<<"Stack is empty "<<endl;
    else
    {
        top--;
        x=stk[top];
    }
    return x;
}
int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
   int way= s.pop();
   cout<<way;
}