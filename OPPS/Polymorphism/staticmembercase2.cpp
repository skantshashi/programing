#include <iostream>
using namespace std;
// static member cab be use a counter 
class Student
{
public:
 int roll;
 string name;
 static int addNo;
 Student(string n)
 {
 addNo++;
 roll=addNo;
 name=n;
 }
 void display()
 {
 cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;
 }
};
int Student::addNo=0;
int main()
{
 Student s1("John");
 Student s2("Ravi");
 Student s3("Ram");
 Student s4("lrishan");
 Student s5("krishna");
 Student s6("shayam");
 
 
 s1.display();
 s2.display();
 s3.display();
 s4.display();
 s5.display();
 s6.display();
 cout<<"Number Admission "<<Student::addNo<<endl;
} 