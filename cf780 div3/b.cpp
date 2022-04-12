#include<bits/stdc++.h>
using namespace std;
int main()
{
    int time;
    cin>>time;
    while(time--)
    {
        long long num;
        int flag=0;
        cin>>num;
        vector<long long>a;
        for(int i=0;i<num;i++)
        {
            long long tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        if(num==1&&a[0]>1)
            flag=1;
        sort(a.begin(),a.end());
        if(num>=2&&(a[num-1]-a[num-2]>=2))
            flag=1;
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
