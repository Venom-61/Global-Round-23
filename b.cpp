#include<bits/stdc++.h>
using namespace std;

#define ll long long

// b. Rebellion

void solve() {
    int n; 
    cin >> n;
    vector<int> a, b;

    bool start = false;
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if(x == 1 or start) {
            start = true;
            a.push_back(x);
            b.push_back(x);
        }
    }
    
    sort(b.begin(), b.end());

    int ans = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) 
            ans++;
    }
    cout << ans / 2 << "\n";
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
