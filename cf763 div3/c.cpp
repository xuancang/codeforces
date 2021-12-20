#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long a,b,st=1,ans=0;
        cin>>a>>b;
        vector<long long>num;
        while(a!=0&&b!=0)
        {
            int de=10;
            while(b%de<a%10)
            {
                if(b<a%10)
                {
                    st=0;
                    break;
                }
                de=de*10;
            }
                if(b%de-a%10>=10)
                {
                    st=0;
                    break;
                }


            num.push_back(b%de-a%10);
            b=b/de;
            a=a/10;

        }
        if(a>b&&st)
            {
                st=0;
            }
        else
        {
            num.push_back(b-a);
        }

        reverse(num.begin(),num.end());
        for(long long i=0;i<num.size();i++)
            ans=ans*10+num[i];
        if(st)
            cout<<ans<<endl;
        else
            cout<<"-1"<<endl;
    }
}
