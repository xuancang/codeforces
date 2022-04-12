#include<bits/stdc++.h>
using namespace std;

pair<int,int> ask(int a)
{
    pair<int,int> as;
    int num=0;
    while(a%2==0)
    {

        num+=1;
        a=a/2;
    cout<<" ***"<<num<<" "<<a<<endl;
    }

    as.first=num;
    as.second=a;
    return as;
}
int main()
{
    int time;
    cin>>time;
    while(time--)
    {
        int n,ans=15;
        cin>>n;
        for(int i=0;i<=15;i++)
        {
            for(int j=0;j<=15;j++)
            {
                if(((n+i)<<j)%32768==0)
                    ans=min(ans,i+j);
            }
        }
        cout<<ans<<endl;
    }
}
