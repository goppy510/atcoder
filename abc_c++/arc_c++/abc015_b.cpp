#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repe(i, n) for (int i = 0; i <= (n); ++i)
#define repr(i, n) for (int i=n-1; i > 0; --i)
#define all(x) (x).begin(),(x).end()
#define pb(x) push_back(x);
using namespace std;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
typedef long long ll;
const int INF = 1e9;
const ll mod = 1000000007;
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int lcm(int a,int b){return a*b / gcd(a,b);}

int main() {
    int n,a;
    cin >> n;
    vector<int> v;
    while(n--) {
        cin >> a;
        v.pb(a);
    }
    int res = 0;
    double s = accumulate(v.begin(), v.end(), 0);
    rep(i,v.size()) {
        if (v[i] == 0) {
            continue;
        }
        res++;
    }
    cout << ceil(s/res) << "\n";
}
