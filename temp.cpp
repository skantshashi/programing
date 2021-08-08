#include<bits/stdc++.h>
using namespace std;
int lowest(int num)
{   
    int A[10];
    int count=0,u;
    for(int i=1;i<=num;i++)
      {
          if(num%i==0)
          {   
             A[u]=i;
              u++;
              lowest(i);
          }

      }
       for(auto x:A)
    {   
        if(x==2)
        {
            count++;
        }
      
    }
  return count;
 }
int main()
{   
    
    int num,result;
    cout<<"enter a no :";
    cin>>num;
     result=lowest(num);
 
    cout<<"no of 2 is :"<<result;

    return 0;

}