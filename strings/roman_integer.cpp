#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n = s.length();
		vector <int> a(n);
		for(int i=0;i<=s.length();i++)
		{
			if(s[i] == 'X' || s[i] == 'x')
				a[i] == 10;
			if(s[i] == 'V' || s[i] == 'v')
				a[i] = 5;
			if(s[i] == 'I' || s[i] == 'i')
				a[i] = 1;
			if(s[i] == 'L' || s[i] == 'l')
				a[i] = 50;
			if(s[i] == 'M' || s[i] == 'm')
				a[i] = 1000;
			if(s[i] == 'C' || s[i] == 'c')
				a[i] = 100;
			//cout<<a[i]<<endl;
		}
		int sum = a[0];
		cout<<a[0];
		for(int i =1;i<s.length();i++)
		{
			if(a[i] > a[i-1])
				sum-=a[i];
			else
				sum+=a[i];
			//cout<<a[i]<<" ";
		}
		//cout<<abs(sum)<<endl;
	}
}