#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long int a,b,c,d;
        int flag=0;
        cin>>a>>b>>c>>d;
        if(d>=a*c)
        {
            if(d==a*c)
            {
                flag=1;

            }
            else
            {
                d=d-a*c;
                if(d<=b)
                    flag=1;
                else
                    flag=0;
            }
        }
        else
        {
            d=d%c;
            if(d<=b)
                flag=1;
            else
                flag=0;
        }
        if(flag)
            cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }
}
