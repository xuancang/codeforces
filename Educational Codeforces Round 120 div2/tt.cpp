#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }
    string s;
    cin >> s;
    vector<int> res(n, -1);
    int ptr = 0;
    for (int r = 0; r <= 1; r++)
        {
          vector<pair<int, int> > a;
          for (int i = 0; i < n; i++)
            {
                if ((int) (s[i] - '0') == r)
                {
                  a.push_back(make_pair(p[i], i));
                }
            }
            for (vector<pair<int,int> >::iterator p=a.begin();p!=a.end();p++ )
              {
                cout<<(*p).first<<" "<<(*p).second<<endl;
              }
              cout<<"*******************************"<<endl;
          sort(a.begin(), a.end());
            for (vector<pair<int,int> >::iterator p=a.begin();p!=a.end();p++ )
              {
                cout<<(*p).first<<" "<<(*p).second<<endl;
              }
              cout<<"*******************************"<<endl;
          for (vector<pair<int,int> >::iterator p=a.begin();p!=a.end();p++ )
              {
                res[(*p).second] = ++ptr;
              }
        }
    for (int i = 0; i < n; i++) {
      if (i > 0) {
        cout << " ";
      }
      cout << res[i];
    }
    cout << '\n';
  }
  return 0;
}
