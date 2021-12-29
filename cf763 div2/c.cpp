#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        vector<int>a;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        for(int i=2;i<n;i++)
        {
            if(a[i]>3)
            {
                int tu=(a[i]-a[i]%3)/3;
                a[i]=a[i]%3;
                a[i-2]+=2*tu;
                a[i-1]+=tu;
            }
        }
        sort(a.begin(),a.end());
        cout<<a[0]<<endl;
    }
}
