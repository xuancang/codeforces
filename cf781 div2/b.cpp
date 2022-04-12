#include<bits/stdc++.h>
using namespace std;
int main()
{
    int time;
    cin>>time;
    while(time--)
    {
        int n;
        cin >> n;
        map<int,int> m;
        for(int i = 0;i<n;i++){
            int num;
            cin>>num;
            m[num]++;
        }
        int ma = 0;
        int ans;
        for(map<int,int>::iterator it = m.begin();it != m.end();it++){
            if(it->second > ma){
                ma=it->second;
                ans=it->first;
            }
        }
        int t=0;
        while(ma<n)
        {
            t=t+ma+1;
            ma=ma*2;
        }
        t-=(ma-n);
        cout<<t<<endl;
    }

}
