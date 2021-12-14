#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--)
    {
        int num[7];
        for(int i=0;i<7;i++)
        {
            cin>>num[i];
        }
        cout<<num[0]<<' '<<num[1]<<' '<<num[6]-num[0]-num[1]<<endl;

    }
}
