#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;
string clockwise(string s)
{
	int d = 2;
	while(d > 0)
	{
		int n = s.length() -1 ;
		char temp = s[n];
		for(int j=s.length()-1;j>0;j--)
		{
			s[j] = s[j-1];
		}
		s[0] = temp;
		d--;
	}
	return s;
}

string anticlock(string s)
{
	int d = 2;
	while(d > 0)
	{
		int n = s.length() - 1;
		char temp = s[0];
		for(int i=0;i<s.length()-1;i++)
		{
			s[i] = s[i+1];

		}
		s[n] = temp;
		d--;
	}
	return s;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a;
		cin>>b;
		string anti = anticlock(b);
		string clock = clockwise(b);
		if(a.compare(anti) == 0)
			cout<<"1"<<endl;
		else if(a.compare(clock) == 0)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
}