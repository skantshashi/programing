#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[5]{1,2,3,4,5};
    int i=0,sum=0;
    for(auto x:A){
        sum=sum+A[i];
        i++;
    }
    cout<<"sum of the element of array :"<<sum;
    return 0;
}