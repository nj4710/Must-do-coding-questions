#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
	
	int t,n;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		vector <int> arr(n);
		int xor1=0,xor2=0;
		for(int i=0;i<n-1;i++)
			cin>>arr[i];
		for(int i=1;i<=n;i++)
		{
			xor1 = xor1 ^ i;
		}
		for(int i=0;i<n-1;i++)
		{
			xor2 = xor2 ^ arr[i];
		}
		cout<<(xor1^xor2)<<endl;
		t--;
	}
	


}