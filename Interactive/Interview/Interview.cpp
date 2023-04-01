#include <bits/stdc++.h>
#define int long long
//#define endl '\n'
#define pii pair<int,int>
#define vint vector<int>
#define pb push_back
#define se second 
#define fi first
#define all(x) x.begin(), x.end()
#define graph vector<vint>
using namespace std;
const int N = (int)2e5 + 69;
const int mod = (int)1e9 + 7;
int INF = LLONG_MAX;
int power(int a, int b) { int ans = 1; while (b) { if (b % 2) ans *= a; a *= a; b /= 2; } return ans; }
int gcd(int a, int b) { if (b == 0)return a;return gcd(b, a % b); }

int n;
vint a;
int ask(int l, int r) {
    cout << "? " << r - l + 1;
    for (int i = l + 1; i <= r + 1; i++)
        cout << ' ' << i;
    cout << endl;
    cout.flush();
    int ans;
    cin >> ans;
    return ans;
}
int32_t main() {

    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        a.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i)
                a[i] += a[i - 1];
        }
        int l = 0, r = n;
        while (l < r) {
            int mid = (l + r) / 2;
            int x = ask(l, mid);
            int sum = a[mid] - (l ? a[l - 1] : 0);
            if (x != sum)
                r = mid;
            else
                l = mid + 1;
        }
        cout << "! " << l + 1 << endl;
        cout.flush();
    }
}