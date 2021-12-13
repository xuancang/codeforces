#include<bits/stdc++.h>
using namespace std;
using li = long long;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long long h;
		cin>>n>>h;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		li de[n-1];
		for (int i=0;i<n-1;i++)
		{
			de[i]=a[i+1]-a[i];
		}
		li l=1,r=1e18;
		while(l<=r)
		{
			li m=(l+r)/2;
			li sum=m;
			for(int i=0;i<n-1;i++)
				sum+=min(m,de[i]);
			if(sum<h)
				l=m+1;
			else 
				r=m-1;
		}
		cout<<r+1<<endl;

	}

}
