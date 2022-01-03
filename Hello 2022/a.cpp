#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int a,b;
        cin>>a>>b;
        if(a%2)
        {
            if(b>a/2+1)
            {
                cout<<"-1"<<endl;
                continue;
            }
            else
            {
                int flag=1;
                for(int i=0;i<a;i++)
                {
                    for(int j=0;j<a;j++)
                    {
                        if(i==j&&b!=0&&flag)
                        {
                            cout<<"R";
                            b--;
                            flag=0;
                        }
                        else if(i==j&&b!=0&&!flag)
                        {
                            flag=1;
                            cout<<".";
                        }

                        else
                            cout<<".";

                    }
                    cout<<endl;
                }
            }
        }
        else
        {
            if(b>a/2)
            {
                cout<<"-1"<<endl;
                continue;
            }
            else
            {
                int flag=1;
                for(int i=0;i<a;i++)
                {
                    for(int j=0;j<a;j++)
                    {

                         if(i==j&&b!=0&&flag)
                        {
                            cout<<"R";
                            b--;
                            flag=0;
                        }
                        else if(i==j&&b!=0&&!flag)
                        {
                            flag=1;
                            cout<<".";
                        }
                        else
                            cout<<".";

                    }
                    cout<<endl;
                }
            }
        }

    }
}
