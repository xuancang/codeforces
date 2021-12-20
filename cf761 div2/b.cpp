#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {

        int a;
        cin>>a;
        for(int i=2;i<a;i++)
        {
            if(__gcd(a-i-1,i)==1)
               {
                   cout<<a-i-1<<" "<<i<<" "<<1<<endl;
                   break;
               }
        }

    }
}
