#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string t;
        cin>>t;
        if(t.length()%2)
            cout<<"NO"<<endl;
        else
        {
            int a=0,b=t.length()/2,ok=1;
            while(a!=t.length()/2)
            {
                if(t[a]!=t[b])
                    {
                        ok=0;
                    }
                    a++;
                    b++;
            }
            if(ok)
            cout<<"Yes"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
