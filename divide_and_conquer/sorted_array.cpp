#include <iostream>
#include <math.h>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t > 0)
	{
		cin>>n;
		vector <int> arr(n);
		int result = 0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			result = result ^ arr[i];
		}
		cout<<result<<endl;
		t--;
	}
}