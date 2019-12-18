#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repe(i, n) for (int i = 0; i <= (n); ++i)
#define repe1(i, n) for (int i = 0; i <= (n); ++i)
#define all(x) (x).begin(),(x).end()
using namespace std;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
typedef long long ll;
const int INF = 1e9;
const ll mod = 1000000007;
int gcd(int a,int b){return b?gcd(b,a%b):a;}

int main() {
  int n,s,t,w,a,x,z;
  cin >> n >> s >> t >> w;
  vector<int> v;
  z = n-1;
  while(z--) {
    cin >> a;
    v.push_back(a);
  }
  int cnt = 0;
  x = w;
  if (x >= s && x <= t) {
    cnt++;
  }
  for(int i=0; i<v.size(); ++i) {
    x = x + v[i];
    if (x >= s && x <= t) {
      cnt++;
    }
  }
  cout << cnt << "\n";
}
