#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--)
    {
        int t,st=1,be=1;
        cin >>t;
        int a,b,ans;
        b=0;
        ans=1;
        for(int i=0;i<t;i++)
        {

            cin>>a;
            if(be)
            {
                if(i==0)
            {
                if(t==1)
                {
                    st=0;
                    if(a)
                        cout<<2<<endl;
                    else
                        cout<<1<<endl;
                }
                if(a)
                {
                    ans++;
                    b=a;

                }

                else
                {
                    b=a;

                }
                continue;
            }
            if(a)
            {
                if(b){
                        ans+=5;
                        b=a;

                }
                else
                {
                    ans++;
                    b=a;

                }

            }
            else
            {
                if(b) b=a;
                else
                {
                    cout<<"-1"<<endl;
                    st=0;
                    be=0;
                }
            }
        }

            }
        if(st)
            cout<<ans<<endl;
    }
}
