#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repe(i, n) for (int i = 0; i <= (n); ++i)
#define repr(i, n) for (int i = n - 1; i > 0; --i)
#define all(x) (x).begin(), (x).end()
#define pb(x) push_back(x);
using namespace std;
template <class T> bool chmax(T &a, const T &b) {if (a<b) {a = b; return 1;} return 0;}
template <class T> bool chmin(T &a, const T &b) {if (b<a) {a = b; return 1;} return 0;}
typedef long long ll;
const int INF = 1e9;
const ll mod = 1000000007;
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

int main() {
    int n,d;
    cin >> n;
    int v[110];
    int res = 0;
    rep(i,n) cin >> v[i];
    rep(i,n) rep(j, n) {
        if (i != j) {
            res += v[i]*v[j];
        }
    }
    cout << res/2 << "\n";
}
