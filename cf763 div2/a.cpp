#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,m,sx,sy,dx,dy,ans1=0,ans2=0;
        cin>>n>>m>>sx>>sy>>dx>>dy;
        if(sx <=dx)
        {
            ans1=dx-sx;
        }
        else
        {
            ans1=2*n-sx-dx;
        }
        if(sy <=dy)
        {
            ans2=dy-sy;
        }
        else
        {
            ans2=2*m-sy-dy;
        }
        cout<<min(ans1,ans2)<<endl;
    }
}
