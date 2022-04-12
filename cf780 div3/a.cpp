#include<bits/stdc++.h>
using namespace std;
int main()
{
    int time;
    cin>>time;
    while(time--)
    {
        long long a,b;
        cin>>a>>b;
        if(a+b==0)
        {
            cout<<1<<endl;
        }

        else if(a==0&&b!=0)
        {
            cout<<1<<endl;
        }

        else
        {
            cout<<b*2+a+1<<endl;
        }

    }
}
