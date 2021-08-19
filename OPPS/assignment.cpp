#include<bits/stdc++.h>
using namespace std;
class student
{
    int roll;
    string name;
    int math;
    int physics;
    int english;
    public:
    student(int r,string n,int p ,int q, int s)
    {
        roll=r;
        name=n;
        math=p;
        physics=q;
        english=s;
    }
    int total()
    {
        return math+physics+english;
    }
    char grade()
    {
        float avg=total()/3;
        if(avg>60)
        {
            return 'A';
        }
        else if((avg>=40) && (avg<60))
        {
            return 'B';
        }
        else return 'C';
    }
};
int main()
{
    int roll;
    string name;
    int a,b,c;
    
    cout<<"enter your roll no: "<<endl;
    cin>>roll;
    cout<<"enter your name : "<<endl;
    cin>>name;
    cout<<"enter the marks of 3 subject : "<<endl;
    cin>>a>>b>>c;
    student s(roll,name,a,b,c);
    cout<<"total marks : "<<s.total()<<endl;
    cout<<"grade of student : "<<s.grade()<<endl;
    return 0;
}