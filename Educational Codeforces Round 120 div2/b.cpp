#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.second<b.second&&a.first>b.first)
        return true;
    if(a.second>b.second&&a.first<b.first)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        vector<pair<int,int> >a;
        string b;
        for(int i=0;i<t;i++)
        {
            int tmp;
            cin>>tmp;
            a.push_back(make_pair(tmp,1));
        }
        cin>>b;
        char like[t];
        strcpy(like,b.c_str());
        for(int i=0;i<t;i++)
        {
            if(like[i]=='0')
                a[i].second=0;
            else if(like[i]=='1')
                a[i].second=1;
        }
        /**
        for(int i=0;i<t;i++)
        {
            for(int j=i;j<t;j++)
            {
                if(a[i].second>a[j].second&&a[i].first<a[j].first)
                {
                    int tmp=a[i].first;
                    a[i].first=a[j].first;
                    a[j].first=tmp;
                }
                if(a[i].second<a[j].second&&a[i].first>a[j].first)
                {
                    int tmp=a[i].first;
                    a[i].first=a[j].first;
                    a[j].first=tmp;
                }
            }
        }
        **/
        sort(a.begin(),a.end(),cmp);
        for(int i=0;i<t;i++)
        {
            cout<<a[i].first<<" ";
        }
        cout<<endl;
    }
}
