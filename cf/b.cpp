#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long t;
        int ans=0,c=1;
        vector<long long>a;
        cin>>t;
        if (t==1)
            {
                cout<<1<<endl;
                continue;
            }

        for(long long i=1;i<t;i++)
        {
            long long ta,tb;
            ta=i*i*i;
            tb=i*i;
            if(ta<=t)
                a.push_back(ta);
            if(tb<=t)
                a.push_back(tb);
            else
                break;

        }
        sort(a.begin(),a.end());
        a.erase(unique(a.begin(),a.end()),a.end());
        cout<<a.size()<<endl;
    }
}
