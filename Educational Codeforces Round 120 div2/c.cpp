#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long a,k,ars=1e17,ab=1e17,c=0;
        cin>>a>>k;
        k=k/a;
        long long ar[a];
        for(long long i=0;i<a;i++)
        {
            cin>>ar[i];
            if(ar[i]>=k&&abs(k-ar[i])<ab&&ar[i]<=ars)
            {
                c=1;
                ars=ar[i];
                ab=abs(k-ar[i]);
            }
        }
        long long ans=ab-1;
        if(!c)
            ans=0;
        for(long long i=0;i<a;i++)
        {
            if(ar[i]>k)
            {
                ans++;
            }
        }
        if(k==0)
        {
            sort(ar,ar+a);
            ans=ar[0]+a-1;
        }
        cout<<ans<<endl;;

    }
}
