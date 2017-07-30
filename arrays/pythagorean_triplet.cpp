#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,flag=1,count=1;
		cin>>n;
		vector <int> arr(n);
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i++)
			arr[i] =arr[i]*arr[i];

		sort(arr.begin(),arr.end());
		for(int i=n-1;i>=2;i--)
		{
			int l=0;
			int r = i-1;
			
			while(l < r)
			{
				if(arr[l] + arr[r] == arr[i])
				{
					cout<<"Yes"<<endl;
					flag=0;
					count = 0;
					break;
				}
				else if(arr[l]+arr[r]<arr[i])
					l++;
				else
					r--;
			}
			if(count==0)
				break;
		}
		if(flag == 1)
			cout<<"No"<<endl;
	}
}