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
    vector<int> v;
    cin >> n;
    while(n--) {
        cin >> a;
        v.pb(a);
    }
    int total = 0;
    for(int i=0; i<v.size(); ++i) {
        while(v[i]%2 == 0 || v[i]%3 == 2) {
            v[i]--;
            total++;
        }
    }
    cout << total << "\n";
}