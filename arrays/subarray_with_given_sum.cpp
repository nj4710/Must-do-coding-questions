#include <iostream>
#include <math.h>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum;
		cin>>n;
		cin>>sum;
		vector <int> arr(n);
		for(int i=1;i<=n;i++)
			cin>>arr[i];
		int flag = 1;
		for(int i=1;i<=n;i++)
		{
			int cur_sum = arr[i];
			int j =i+1;
			for(;j<=n;j++)
			{
				if(cur_sum == sum)
				{
					cout<<i<<" "<<j-1;
					flag = 0;
					break;
				}
				if(cur_sum > sum || j==n)
					break;
				cur_sum += arr[j];
			}
			if(flag == 0)
				break;
		}
		cout<<endl;

	}
}