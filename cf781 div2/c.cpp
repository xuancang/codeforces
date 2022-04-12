#include<bits/stdc++.h>
using namespace std;
int main()
{
    int time;
    cin>>time;
    while(time--)
    {
        int n;
        cin>>n;
        int a[n],num[n];
        for(int i=0;i<n;i++)
        {
            num[i]=0;
        }
        int deep=0,ans=1,qf=1;
        set<int>d;
        vector<int>bread;
        int tmp;
        for(int i=0;i<n-1;i++)
        {
            cin>>tmp;
            d.insert(tmp);
            a[i]=tmp-1;
            num[tmp-1]++;
        }
        deep=d.size();

        cout<<"bread:";
        for(int i=0;i<n-1;i++)
        {
            cout<<num[i]<<" ";
            if(num[i]>0)
                bread.push_back(num[i]-1);
        }
        cout<<endl;

        if(bread.size()==1)
            deep=2;
        cout<<"deep:"<<deep<<endl;
        int qsum=0,gsum=0,flag=1;
        for(int i=0;i<bread.size();i++)
        {
            if(qsum<deep)
            {
                if(flag&&qsum+bread[i]>=deep)
                {
                    gsum+=bread[i]-(deep-qsum);
                    qsum=deep;
                    flag=0;
                }
                else
                    qsum+=bread[i];
            }
            else
            {
                if(flag&&qsum+bread[i]>=deep)
                {
                    gsum+=bread[i]-(deep-qsum);
                    qsum=deep;
                    flag=0;
                }
                else
                {
                    gsum+=bread[i];
                }
            }
        }
        cout<<"gsum:"<<gsum<<endl;
        if(gsum%2==0)
        {
            cout<<"ans:"<<"  "<<qf+deep+gsum/2<<endl;
        }
        else
        {
            cout<<"ans:"<<"  "<<qf+deep+(gsum-1)/2+1<<endl;
        }
    }
}
