#include<bits/stdc++.h>
using namespace std;
int main()
{
    int time;
    cin>>time;
    while(time--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            if (b[i]>a[i])
            {
                int tmp=a[i];
                a[i]=b[i];
                b[i]=tmp;
            }
        }
        long long suma=0,sumb=0;
        for(int i=1;i<n;i++)
        {
            suma+=abs(a[i-1]-a[i]);
        }
        for(int i=1;i<n;i++)
        {
            sumb+=abs(b[i-1]-b[i]);
        }
        cout<<suma+sumb<<endl;

    }
}
