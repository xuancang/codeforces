
#include <bits/stdc++.h>
using namespace std;
//#pragma GCC optimize(2)
#define close(); 	ios::sync_with_stdio(false);
#define endl '\n'
#define rep(i, l, r) for(int i = l; i <= r; i++)
#define dwn(i, r, l) for(int i = r; i >= l; i--)
typedef long long LL;
const int N = 3e5+100;
int x[N];
void solve()
{
    int n, a, b; cin >> n >> a >> b;
    if(a + b > n-2 || abs(a-b)>1 )
    {
        cout << -1 << endl; return;
    }

    int p = 1, q = n;
    if(a >= b)
    {
        for(int i = 1; i <= n; i++)
        {
            if(i <= a+b+1)
            {
                if(i&1) x[i] = p++;
                else x[i] = q--;
            }
            else x[i] = ((a+b+1)&1? p++: q--);
        }
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            if(i <= a+b+1)
            {
                if(i&1) x[i] = q--;
                else x[i] = p++;
            }
            else x[i] = ((a+b+1)&1? q--: p++);
        }
    }
    rep(i, 1, n) cout << x[i] << " "; cout << endl;
}

int main()
{
    for(int i=0;i<10;i++)
    {
        if(i&1)cout<<i<<endl;
    }
}
