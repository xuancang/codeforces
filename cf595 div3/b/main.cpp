#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int sum;
        cin>>sum;
        int a[5][sum];
        memset(a,0,sizeof(a));
        for(int i=0;i<sum;i++)
        {
            cin>>a[0][i];
            a[1][i]=i+1;//µ±«∞
            a[2][i]=i+1;//±£¡Ù
        }
        int flag=1,tmp[sum],j=1;
        while(flag)
        {
            for(int i=0;i<sum;i++)
            {
                tmp[a[0][i]-1]=a[1][i];
                //cout<<a[3][i]<<" ";
                //cout<<tmp[a[0][i]]<<" ";
            }
            //cout<<endl;
            for(int i=0;i<sum;i++)
            {
                a[1][i]=tmp[i];
                //cout<<a[1][i]<<" ";
                //cout<<a[2][i]<<endl;
                if(a[2][i]==a[1][i])
                    {
                        if(a[4][i]==0)
                        {
                            a[3][i]=j;
                            a[4][i]=1;
                        }
                    }

            }
            flag=0;
            for(int i=0;i<sum;i++)
            {
                if(a[3][i]==0)
                {
                    flag=1;
                    break;
                }
            }
            j++;
        }
        for(int i=0;i<sum-1;i++)
            cout<<a[3][i]<<" ";
        cout<<a[3][sum-1]<<endl;
    }
}
