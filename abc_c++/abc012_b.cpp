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
  int n;
  cin >> n;
  int hh = n/3600;
  int mm = n%3600/60;
  int ss = n-hh*3600-mm*60;
  string h = to_string(hh);
  string m = to_string(mm);
  string s = to_string(ss);
  if (hh < 10 ) {
    h = "0"+h;
  }
  if (mm < 10) {
    m = "0" + m;
  }
  if (ss < 10) {
    s = "0" + s;
  }

  cout << h << ":" << m << ":" << s << "\n";
}
