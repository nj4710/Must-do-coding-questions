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
		int n;
		cin>>n;
		vector <int> arr(n);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int max_so_far=arr[0],max_ending=arr[0];
		for(int i=1;i<n;i++)
		{
			max_ending = max(arr[i], max_ending+arr[i]);
			max_so_far = max(max_so_far,max_ending);

		}
		cout<<max_so_far<<endl;
	}
	
}