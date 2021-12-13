#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        if (a==1)cout<<1;
        else
        for(int i=0;i<a;i++)
            cout<<i+2<<' ';
        cout<<endl;
    }

}
