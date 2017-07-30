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
		string a,b;
		bool flag = true;
		cin>>a;
		cin>>b;
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		//cout<<a<<b;
		for(int i=0;i<a.length();i++)
		{
			if(a[i] != b[i])
			{
				flag = false;
				break;
			}
		}
		if(flag == false)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}