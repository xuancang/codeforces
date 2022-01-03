#include<bits/stdc++.h>
using namespace std;
bool cmpmin(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b)
{
    if(a.first.first<=b.first.first)
        return true;
    else
        return false;
}
bool cmpmax(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b)
{
    if(a.first.second>=b.first.second)
        return true;
    else
        return false;
}
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,l,r,c,ans=0;
        cin>>n;
        vector<pair<pair<int,int>,int> >a;
        pair<pair<int,int>,int> ma,mb;
        for(int i=0;i<n;i++)
        {
            cin>>l>>r>>c;
            a.push_back(make_pair(make_pair(l,r),c));
        }
        sort(a.begin(),a.end(),cmpmin);
        ma=a[0];
        sort(a.begin(),a.end(),cmpmax);
        mb=a[0];
        if(ma.first.first==mb.first.first&&ma.first.second==mb.first.second&&ma.second==mb.second)
        {
            ans+=ma.second;
        }
        else
        {
            ans+=ma.second;
            ans+=mb.second;
        }
        cout<<ans;
    }
}
