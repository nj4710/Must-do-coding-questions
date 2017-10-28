#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int t,n;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		vector <int> arr(n);
		int low = 0,mid=0,high = n-1;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		while(mid <= high)
		{
			if(arr[mid] == 0)
			{
				swap(&arr[mid], &arr[low]);
				low++;
				mid++;
			}
			else if(arr[mid] == 2)
			{
				swap(&arr[mid], &arr[high]);
				high--;
			}
			else
				mid++;
		}
		for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
		t--;
	}
}
