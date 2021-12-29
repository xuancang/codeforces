#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,l,r,k=1;
        cin>>n;
        vector<pair<int,int> >a;
        int cu[2][n+1];
        int mk[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>l>>r;
            a.push_back(make_pair(l,r));
            cu[0][i+1]=i+1;
            cu[1][i+1]=1;
            mk[i+1]=1;
        }
        while(k)
        {
            int ts=0;
            for(int i=0;i<n;i++)
            {
                int num,ab=0;
                if(mk[i+1])
                {
                    l=a[i].first;
                    r=a[i].second;
                    for(int j=l;j<=r;j++)
                    {
                        if(cu[1][j])
                        {
                            ab++;
                            num=j;
                        }
                    }
                    if(ab==1)
                    {
                        cout<<l<<" "<<r<<" "<<num<<endl;
                        cu[1][num]=0;
                    }
                    else
                        continue;
                }
            }
            for(int i=1;i<=n;i++)
            {
                if(cu[1][i]==1)
                {
                    ts++;
                }
            }
            if(!ts)
                k=0;
        }
    }
}
