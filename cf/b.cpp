#include<bits/stdc++.h>
using namespace std;
int dis(int a,int b,int x,int y)
{
    return max(abs(x-a),abs(1-a))+max(abs(y-b),abs(1-b));
}
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int x,y;
        cin>>x>>y;
        vector <int>t;
        int a,b;
        if(x%2==0)
            a=x/2;
        else
            a=x/2+1;
        if(y%2==0)
            b=y/2;
        else
            b=y/2+1;
        for(int i=1;i<=x;i++)
            for(int j=1;j<=y;j++)
            t.push_back(dis(i,j,x,y));
        sort(t.begin(),t.end());
        for(int i=0;i<t.size();i++)
            cout<<t[i]<<" ";
        cout<<endl;

    }
}
