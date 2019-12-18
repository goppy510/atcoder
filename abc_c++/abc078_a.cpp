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
    char x,y;
    cin >> x >> y;
    vector<int> vc = {'A','B','C','D','E','F'};
    vector<int>::iterator itr_x = find(vc.begin(), vc.end(), x);
    vector<int>::iterator itr_y = find(vc.begin(), vc.end(), y);
    int index_x = distance(vc.begin(), itr_x);
    int index_y = distance(vc.begin(), itr_y);
    if (index_x < index_y) {
        cout << '<' << "\n";
    }
    if (index_x > index_y) {
        cout << '>' << "\n";
    }
    if (index_x == index_y) {
        cout << '=' << "\n";
    }
}
