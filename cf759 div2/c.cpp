#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,ans=0;
        cin>>a>>b;
        vector<int>z;
        vector<int>f;
        for(int i=0;i<a;i++){
            int tmp;
            cin>>tmp;
            if(tmp>=0)
                z.push_back(abs(tmp));
            else
                f.push_back(abs(tmp));
        }
        sort(z.begin(),z.end());
        sort(f.begin(),f.end());
        if(z.size()%b==0)
        {
            for(int i=0;i<z.size();i+=b)
            {
                ans+=z[i]*2;
            }
        }
        else
        {
            ans+=z[z.size()-1];
            z.erase(z.end()-z.size()%b,z.end());
            for(int i=0;i<z.size();i+=b)
            {
                ans+=z[i]*2;
            }
        }
        if(f.size()%b==0)
        {
            for(int i=0;i<z.size();i+=b)
            {
                if(i=f.size()-b)
                    ans+=f[i];
                else
                    ans+=f[i]*2;
            }
        }
        else
        {
            ans+=f[f.size()-1];
            f.erase(f.end()-f.size()%b,f.end());
            for(int i=0;i<f.size();i+=b)
            {
                ans+=f[i]*2;
            }
        }
        cout<<ans<<endl;
    }
}
