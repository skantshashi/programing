 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int A[10]{1,2,34,4,53,2,4,4};
     for(auto x:A) //call by value i.e x
     {
         cout<<x<<" "<<endl;
     }
     cout<<"enter the new no "<<endl;
     for(auto &x:A) // call by refence i.e &x
     {
        
        cin>>x;
     }
     cout<<"new element of array :"<<endl;
      for(auto x:A)
     {
         cout<<x<<" ";
     }
     return 0;
 }