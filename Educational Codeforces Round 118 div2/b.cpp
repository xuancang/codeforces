#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
 	for(int i=0;i<n;i++)
	{
		int u;
		cin >>u;
		int a[u];
		for (int j=0;j<u;j++)
		{
			cin>>a[j];
		}
		int time=u/2;
		sort(a,a+u);
		int count =1;
		while(time--)
		{
			cout<<a[count]<<" "<<a[0]<<endl;
			count ++;
		}

			
	}
}
