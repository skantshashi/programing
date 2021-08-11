#include<iostream>
#include<regex>
using namespace std;

bool isValid(const string& email)
{

	const regex pattern(
		"(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

	return regex_match(email, pattern);
}

int main()
{
     cout<<"enter the email id";
	string email="";
	cin>>email;

	bool ans = isValid(email);

	if (ans) {
		cout << email << " : "
			<< "valid" << endl;
	}
	else {
		cout << email << " : "
			<< "invalid" << endl;
	}
}
