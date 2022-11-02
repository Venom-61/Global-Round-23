#include<bits/stdc++.h>
using namespace std;

#define ll long long


// A. Maxima

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    bool isPresent = false;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1)
            isPresent = true;
    }

    if(isPresent) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
