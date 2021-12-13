#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--)
    {
        int s=-1,ans=0,p=-1;
        int t;
        cin>>t;
        int a[t];
        for(int i=0;i<t;i++)
        {
            cin>>a[i];
            if(a[i]>s)
                s=a[i];
        }
        for(int i=t-1;i>=0;i--)
        {
            if(a[i]==s)
                break;
            if(a[i]>p)
                {
                    ans++;
                    p=a[i];
                }

        }
        cout<<ans<<endl;
    }
}
