#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int q,s;
        cin>>q;
        s=q;
        int a[q];
        for(int j=0;j<q;j++)
            cin>>a[j];
        int sum=0;
        while(q!=0)
        {
            q--;
            sum+=q;
        }
        int be[sum],flag=0;
        for(int j=0;j<s;j++)
        {
            for(int k=j+1;k<s;k++)
            {
                if(abs(a[k]-a[j])==1)
                {
                    flag=1;
                }
            }
        }
        if(flag)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
}
