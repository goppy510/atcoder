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
	string s,tmp;
  int n,l,r;
	cin >> s >> n;
  rep(i, n) {
    cin >> l >> r;
    tmp = "";
    for(int j = r-1; j>=l-1; j--) {
      tmp += s[j];
    }
    s = s.substr(0,l-1) + tmp + s.substr(r, (s.size() - r) + 1);
  }
  cout << s << "\n";
}
