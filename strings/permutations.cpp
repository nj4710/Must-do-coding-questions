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
		sort(s.begin(),s.end());
		do{
			cout<<s<<" ";
		}
		while(next_permutation(s.begin(),s.end()));
	}
}