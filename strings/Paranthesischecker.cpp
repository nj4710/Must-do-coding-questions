#include <iostream>
#include <string>
#include <stack>
using namespace std;
stack <char> arr;

int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i] == '{' || s[i] == '(' || s[i] == '[')
				arr.push(s[i]);
			else if(s[i] == '}' || s[i] == ')' || s[i]==']')
				arr.pop();
		}
		if(arr.size()==0)
			cout<<"balanced";
		else
			cout<<"not balanced";
		t--;
	}
}