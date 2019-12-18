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

int searchd(vector<int> v, int x, int y) {
  rep(i,v.size()) {
    int x_c = count(v.begin(), v.end(), x);
    int y_c = count(v.begin(), v.end(), y);
    if (x_c == y_c && x_c == 1) {
      return 1;
    }
  }
};

int main() {
  int x,y;
  cin >> x >> y;
  vector<int> v1 = {1,3,5,7,8,10,12};
  vector<int> v2 = {4,6,9,11};
  vector<int> v3 = {2};
  if (searchd(v1, x,y) == 1 || searchd(v2, x,y) == 1 || searchd(v3, x,y) == 1) {
    cout << "Yes" << "\n";
  } else {
    cout << "No" << "\n";
  }
}
