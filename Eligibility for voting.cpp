#include<iostream>
using namespace std;
main()
{
	int age=0;
	cout<<"Enter Your Age : ";
	cin>>age;
	if(age<18)
	{
		cout<<"You are minor and not eligible to vote";
	}
	else
	{
		cout<<"You are major and eligible to vote";
	}
	return 0;
}
