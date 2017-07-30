#include <iostream>
#include <math.h>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		int max = INT_MIN;
		vector <int> arr(n);
		vector <int> leaders(n, -1);
		for(int i=0;i<n;i++)
			cin>>arr[i];
		//cout<<arr[n-1]<<" ";
		for(int i=n-1;i>=0;i--)
		{
			if(max < arr[i])
			{
				max = arr[i];
				leaders.insert(leaders.begin() + i,arr[i]);
			}
		}
		for(int i=0;i<leaders.size();i++)
			{
				if(leaders[i] != -1)
					cout<<leaders[i]<<" ";
			}

		cout<<endl;
		t--;
	}
}