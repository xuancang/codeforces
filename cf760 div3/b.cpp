#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--)
    {
        int l;
        cin>>l;
        vector<char>s;
        char a,b,tmp;
        for(int i=0;i<l-2;i++)
        {
            cin>>a>>b;
            if(i==0)
            {
                s.push_back(a);
                tmp=b;
                if(i==l-3)
                {
                    s.push_back(b);
                }
                continue;
            }
            if(tmp==a)
            {
                s.push_back(a);
                tmp=b;
                if(i==l-3)
                {
                    s.push_back(b);
                }
                continue;
            }
            s.push_back(tmp);
            s.push_back(a);
            tmp=b;
            if(i==l-3)
            {
                s.push_back(b);
            }
        }

        for(int i=0;i<s.size();i++)
            cout<<s[i];
        if(s.size()!=l)
            cout<<s[s.size()-1];
        cout<<endl;
    }
}
