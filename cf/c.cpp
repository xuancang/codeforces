#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,flag=0;
        cin>>n;
        int a[n][n],sum[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                a[i][j]=0;
            sum[i]=0;
        }
        for(int i=0;i<n-1;i++)
        {
            int p,b;
            cin>>p>>b;
            a[p][b]=1;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                sum[i]+=a[i][j];
            if(sum[i]==2)
                flag=1;
        }
        if(flag)
            cout<<-1<<endl;
        else
        {
            int p=0;
            for(int i=0;i<n-1;i++)
            {
                if(p)
                {
                    cout<<2<<" ";
                    p=0;
                }
                else
                {
                    cout<<5<<" ";
                    p=1;
                }

            }
            cout<<endl;
        }
    }
}
