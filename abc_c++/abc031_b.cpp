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
int lcm(int a,int b){return a*b / gcd(a,b);}

int main() {
    int l,h,n,a;
    vector<int> v;
    cin >> l >> h >> n;
    while(n--) {
        cin >> a;
        v.push_back(a);
    }
    for(int i=0; i<v.size(); ++i) {
        if (v[i] < l) {
            cout << l-v[i] << "\n";
        }
        if (v[i] >= l && v[i] <= h) {
            cout << 0 << "\n";
        }
        if (v[i] > h) {
            cout << -1 << "\n";
        }
    }
}
