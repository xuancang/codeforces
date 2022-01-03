#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,cut=0;
        cin>>n;
        int a[201];
        for(int i=0;i<201;i++)
            a[i]=0;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            if(a[c+100])
            {
                a[-c+100]=1;
            }
            else
                a[c+100]=1;
        }
        for(int i=0;i<201;i++)
        {
            if(a[i])
                cut++;
        }
        cout<<cut<<endl;
    }
}
