#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,mk=0,f=1;
        cin>>n;
        string s;
        cin>>s;
        while(mk<n)
        {
            if(f&&mk!=n-1&&s[mk]>s[mk+1])
                {
                    mk++;
                    f=0;
                }
            else if(!f&&mk!=n-1&&s[mk]>=s[mk+1])
                {
                    mk++;
                }

            else
                break;
        }

        for(int i=0;i<=mk;i++)
            cout<<s[i];
        for(int i=mk;i>=0;i--)
            cout<<s[i];
        cout<<endl;

    }
}
