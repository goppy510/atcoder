#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repe(i, n) for (int i = 0; i <= (n); ++i)
#define all(x) (x).begin(),(x).end()
using namespace std;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
typedef long long ll;
const int INF = 1e9;
const ll mod = 1000000007;
int gcd(int a,int b){return b?gcd(b,a%b):a;}

int main() {
  char c[2][3];
  rep(i,2) rep (j,3) cin >> c[i][j];
  if (c[0][0] == c[1][2] && c[0][1] == c[1][1] && c[0][2] == c[1][0]) {
    cout << "YES" << "\n";
  } else {
    cout << "NO" << "\n";
  }
}
