#include <iostream>
#include <vector>
#include <map>
#include <numeric>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<long long> a(n);
    map<long long, long long> freq;
    long long total_sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
        total_sum += a[i];
    }

    // Find the highest frequency f and its corresponding element
    long long max_freq = 0;
    long long max_elem = 0;

    for (auto const& [val, count] : freq) {
        if (count > max_freq) {
            max_freq = count;
            max_elem = val;
        }
    }

    long long f = max_freq;
    long long ans = 0;

    // Check condition: n - f + 2 >= f
    if (n - f + 2 >= f) {
        ans = total_sum;
    } else {
        long long sum_other = total_sum - (f * max_elem);
        ans = sum_other + (n - f + 2) * max_elem;
    }

    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // Uncomment the line below if the problem contains multiple test cases:
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}