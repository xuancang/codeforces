#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {


        int x,y,a,b,flag=0,ca=0,cb=0;
        cin>>x>>y>>a>>b;
        char c[x][y];
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
            {
                cin>>c[i][j];
                if (c[i][j]=='B')
                    flag=1;
            }

        for(int i=0;i<y;i++)
        {
            if(c[a-1][i]=='B')
                ca++;
        }
        for(int i=0;i<x;i++)
        {
            if(c[i][b-1]=='B')
                cb++;
        }
        if(c[a-1][b-1]=='B')
            cout<<0<<endl;
        else if(ca!=0||cb!=0)
            cout<<1<<endl;
        else if(ca==0&&cb==0&&flag==0)
            cout<<-1<<endl;
        else
            cout<<2<<endl;

    }
}
