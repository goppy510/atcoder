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
    int n,k,t;
    int res = 0;
    int i = 0;
    vector<int> vc;
    cin >> n >> k;
    while(n--) {
        cin >> t;
        vc.push_back(t);
    }
    while (i < vc.size()) {
        if (i >= 2) {
            res = vc[i] + vc[i-1] + vc[i-2];
            if (res < k) {
                cout << i+1 << "\n";
                return 0;
            }
        }
        i++;
    }
    cout << -1 << "\n";
}
