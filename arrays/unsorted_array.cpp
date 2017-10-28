#include <iostream>
#include <math.h>
#include <vector>
#include <limits.h>

using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector <int> arr(n);
		int flag=1;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		vector<int> left(n);
		vector <int> right(n);
		left[0] = INT_MIN;
		for(int i=1;i<n;i++)
		{
			left[i] = max(left[i-1],arr[i-1]);	
		}	
		right[n-1] = INT_MAX; 
		for(int i=n-2;i>=0;i--)
		{
			right[i] = min(right[i+1],arr[i+1]);
		}
		for(int i=0;i<n;i++)
		{
			if(i!=0 && i!=n-1 && left[i] <= arr[i] && right[i] >= arr[i])
			{
				cout<<arr[i]<<endl;
				flag=0;
				break;
			}
		}
		if(flag == 1)
			cout<<"-1"<<endl;

	}
}
