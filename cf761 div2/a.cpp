#include<bits/stdc++.h>
using namespace std;
bool cmp(char a,char b)
{
    if(a<=b)
        return false;
    else
        return true;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        string b;
        cin>>a;
        cin>>b;
        reverse(b.begin(),b.end());
        char aa[a.length()];
        strcpy(aa, a.c_str());
        sort(aa,aa+a.length(),cmp);
        string ac(aa);
        int cr[26];
        for(int i=0;i<26;i++)
            cr[i]=0;
        vector<char>s;
        char ct=ac[0];
        s.push_back(ct);
        cr[ct-97]=1;
        for(int i=1;i<ac.length();i++)
        {
            if(ac[i]==ct)
            {
                cr[ct-97]++;
            }
            else
            {
                ct=ac[i];
                s.push_back(ct);
                cr[ct-97]++;
            }
        }
        ac.assign(s.begin(),s.end());
        while(ac.find(b)!=ac.npos)
        {
            char tmp=s[ac.find(b)];
            s[ac.find(b)]=s[ac.find(b)+1];
            s[ac.find(b)+1]=tmp;
            ac.assign(s.begin(),s.end());
        }
        for(int i=ac.length()-1;i>=0;i--)
        {
            for(int j=0;j<cr[ac[i]-97];j++)
                cout<<ac[i];
        }
        cout<<endl;
    }
}
