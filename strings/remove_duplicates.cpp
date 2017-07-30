#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <set>
#include <istream>


using namespace std;

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		
		getline(cin,s);
		
		for(int i=0;i<s.length();i++)
		{
			int j = i+1;

			while(j<s.length())
			{
				if(s[i] == s[j])
				{
					s.erase(j,1);
				}
				else
					++j;
			}
		}
		cout<<s<<endl;
	}
}