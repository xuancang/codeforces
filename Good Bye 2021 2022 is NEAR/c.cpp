#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.second>=b.second)
        return true;
    else
        return false;
}
int main()
{
    int tt;
    cin>>tt;
    set<double>b;
    while(tt--)
    {
        int n;
        vector<int >a;
        for(int i=0;i<n;i++)
        {
            int p;
            a.push_back(p);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                set.insert((double(a[i])-double(a[j]))/(double(i)-j));
            }
        }

    }
}
