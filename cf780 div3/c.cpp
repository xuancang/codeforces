#include<bits/stdc++.h>
using namespace std;
int main()
{
    int time;
    cin>>time;
    while(time--)
    {
        int sum=0;
        string s;
        cin>>s;
        deque<char>a;
        int tmp[26];
        for(int i=0;i<26;i++)
        {
            tmp[i]=0;
        }
        for(int i=0;i<s.length();i++)
        {
            a.push_back(s[i]);
        }
        while(a.size()>=1)
        {
            if(tmp[a[0]-'a']!=0)
            {
                tmp[a[0]-'a']=0;
                a.pop_front();
                for(int i=0;i<26;i++)
                {
                    sum+=tmp[i];
                    tmp[i]=0;
                }

            }
            else if(a[0]==a[1])
            {
                a.pop_front();
                a.pop_front();
            }
            else
            {
                tmp[a[0]-'a']=1;
                a.pop_front();
            }
            //cout<<a[0]<<endl;
           // cout<<sum<<endl;
        }
        if(tmp[a[0]-'a']==1)
            tmp[a[0]-'a']=0;
        for(int i=0;i<26;i++)
                sum+=tmp[i];
        cout<<sum<<endl;
        //cout<<"****************"<<endl;
    }
}
