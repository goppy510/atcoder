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
    if (n == 100) {
        cout << "Perfect" << "\n";
    } else if (n >=90 && n<= 99) {
        cout << "Great" << "\n";
    } else if (n >= 60 && n<= 89) {
        cout << "Good" << "\n";
    } else {
        cout << "Bad" << "\n";
    }
}
