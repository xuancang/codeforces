#include<bits/stdc++.h>
using namespace std;
long t(long a)
{
    int i=0;
    while(a!=0)
    {
        a=a/10;
        i++;
    }
    return i;
}
int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        if (a==0&&c==0)
        {
            cout<<'='<<endl;
            return 0;
        }
        else if (a>0&&c==0)
        {
            cout<<'>'<<endl;
            return 0;
        }
        else if (a==0&&c>0)
        {
            cout<<'<'<<endl;
            return 0;
        }
        int longa=t(a);
        int longc=t(c);
        if (longa+b>longc+d)
            cout<<'>'<<endl;
        else if(longa+b==longc+d)
        {
            int lon=abs(longa-longc);
            double p=pow(10,lon);
            if(a>c)
                a=a/p;
            else if(a<c)
                c=c/p;
            if (a>c)
                cout<<">"<<endl;
            else if (a==c)
                cout<<"="<<endl;
            else if(a<c)
                cout<<"<"<<endl;
        }
        else if(longa+b<longc+d)
            cout<<'<'<<endl;
    }
}
