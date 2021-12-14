#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    if (a>b)
        return true;
    else return false;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,score=0;
        cin>>a>>b;
        int l=0,r=a-1;
        int u[a];
        for(int i=0;i<a;i++)
        {
            cin>>u[i];
        }
        sort(u,u+a,cmp);
        for(int i=0;i<b;i++)
        {
            score+=u[r]/u[l];
            l++;
            r--;
        }
        for(int i=l;i<=r;i++)
        {
            score+=u[i];
            cout<<"add"<<score<<endl;
        }

        cout<<score<<endl;

    }
}
