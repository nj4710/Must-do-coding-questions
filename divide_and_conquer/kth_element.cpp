#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t,m,n,e;

	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>m;
		cin>>e;
		vector<int> arr1(n),arr2(m);
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		vector<int> res(m+n);
		int i=0,j=0,k=0;
		while(i<n && j<m)
		{
			if(arr1[i]< arr2[j])
			{
				res[k] = arr1[i];
				i++;
				k++;
			}
			else
			{
				res[k] = arr2[j];
				j++;
				k++;
			}
		}
		while(i<n)
		{
			res[k] = arr1[i];
			i++;
			k++;
		}
		while(j<m)
		{
			res[k] = arr2[j];
			j++;
			k++;
		}
		//for(int i=0;i<k;i++)
		//	cout<<res[i]<<" ";
		cout<<res[e-1]<<endl;

	}
}