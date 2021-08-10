#include<bits/stdc++.h>
using namespace std;



vector<vector<string> > Anagrams(vector<string>& a) 
{ 

    map<string, vector<string>>m;
    
    for(int i=0;i<string_list.size();i++)
    {
        string s=string_list[i];
        sort(s.begin(), s.end());
        
        m[s].push_back(string_list[i]);
    }
    
    
    vector<vector<string> > v;
    
    for(auto i:m)
    {
        v.push_back(i.second);
    }
    
    return v;
}

int main(){
    string str=" " ;
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str1;
        v.push_back(str1);
    }
    vector<vector<string>> result = Anagrams(v);
    sort(result.begin(),result.end());
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }
}