#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
		stack <char> st;
		string s;
		cin>>s;
		int length = s.length();
		reverse(s.begin(),s.end());
		for(int i=0;i<=s.length();i++)
		{
			if(s[i] != '.' && s[i] != '\0')
				st.push(s[i]);
			else
			{
				int len = st.size();
				while(len--)
				{
					cout<<st.top();
					st.pop();
				}
				if(i!=length)
					cout<<'.';
			}
		}
		cout<<endl;
	}
}