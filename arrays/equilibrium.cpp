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
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];	
		}
		if(n == 1)
			cout<<"1"<<endl;
		else if(n == 2)
			cout<<"-1"<<endl;
		else
		{
			vector <int> left(n);
			left[0] =0;
			vector <int> right(n);
			right[n-1] = 0;
			for(int i=1;i<n;i++)
			{
				left[i] = left[i-1] + arr[i-1];
			}
			
			for(int i=n-2;i>=0;i--)
			{
				right[i] = right[i+1] + arr[i+1];
			}
			int flag=1;
			for(int i=0;i<n;i++)
			{
				if(left[i] == right[i])
				{
					cout<<i+1<<endl;
					flag = 0;
					break;
				}
			}	
			if(flag == 1)
				cout<<"-1"<<endl;
		}
	}
}