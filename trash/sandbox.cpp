#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;
#define uns unsigned
#define ll long long
#define int long long
#define pii pair<int, int>
#define F first
#define S second
 
#ifdef LOCAL
#define debug(x) cerr << __LINE__ << " : " << (#x) << " = " << (x) << endl;
#else
#define debug(x) ((void)0)
#endif
#define all(x) (x).begin(), (x).end()
mt19937 rng(42);
 
constexpr ll Inf = 1e17;
constexpr int iInf = 1e9;
constexpr int N = 1e6+100;
 
void solve() {
    string a, b; cin >> a >> b;
    int sm = 0;
    for (char c : a)
        sm += c - '0';
    for (char c : b)
        sm -= c - '0';
    if (sm%10) {
        cout << "-1\n";
        return;
    }
    int n = a.size(), m = b.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    vector<vector<int>> posa(10);
    int now = 0;
    posa[now].push_back(-1);
    for (int i = 0; i < n; i++) {
        now += a[i] - '0';
        posa[now%10].push_back(i);
    }
    for (int i = n; i >= 0; i--) {
        vector<vector<int>> posb(10);
        int now = 0;
        posb[now].push_back(-1);
        for (int i = 0; i < m; i++) {
            now += b[i] - '0';
            posb[now%10].push_back(i);
        }
        for (int j = m; j >= !i; j--) {
            for (int k = 0; k < 10; k++) {
                while (posa[k].size() && posa[k].back() >= i-1)
                    posa[k].pop_back();
                while (posb[k].size() && posb[k].back() >= j-1)
                    posb[k].pop_back();
                // if (!i && j == 1 && posa[k].size() && posb[k].size()) {
                //     cerr << k << " : " << posa[k].back()+1 << ", " << posa[k].back()+1 << "\n";
                // }
                if (posa[k].size() && posb[k].size())
                    dp[posa[k].back()+1][posb[k].back()+1] = max(dp[posa[k].back()+1][posb[k].back()+1], dp[i][j] + 1);
            }
        }
    }
    // for (int i = 0; i <= n; i++) {
    //     for (int j = 0; j <= m; j++)
    //         cerr << dp[i][j] << " ";
    //     cerr << "\n";
    // }
    // cerr << "\n";
    int res = 0;
    for (int i = 0; i <= n; i++)
        res = max(res, dp[i][0]);
    for (int i = 0; i <= m; i++)
        res = max(res, dp[0][i]);
    cout << res << "\n";
}
 
signed main() {
        auto start = chrono::high_resolution_clock::now();
#ifndef LOCAL
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#endif
    int T;
    cin >> T;
    while (T--)
        solve();
    
    auto end = chrono::high_resolution_clock::now();

    cerr << chrono::duration<double>(end - start).count() << '\n';
}