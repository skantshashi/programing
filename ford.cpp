#include<bits/stdc++.h>
using namespace std;
int reverse( int n)
{  
    int rev=0,rem;
    while (n!=0)
    {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    }
    return rev;
}
int diff( int p, int q)
{
    int m,t;
    m=p-q;
    t= abs(m);
    return t;
}
int factor(int lum)
{   
   int arr[n];
   for(int i=1;i<=lum;i++)
   {
       if(lum%i==0)
       {
           arr[i]=i;
       }
   }


 return count;
}
int main()
{
int  num;

cout<<"enter a number :";
cin>>num;
int temp=num;
int revv=reverse(num);
cout<<"reverse of no :"<<revv<<endl;
int difff= diff(revv,temp);
cout<<"abs diff of no :"<<difff<<endl;
int result=factor(difff);


return 0;
}
