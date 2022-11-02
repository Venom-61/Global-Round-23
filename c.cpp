#include<bits/stdc++.h>
using namespace std;

#define ll long long

// C. Permutation Operations

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
        b[a[i]] = i;
    }

    for(int i = 0; i < n; i++) {
        if(b[i] == n - 1) 
            cout << rand() % n + 1 << (i == n - 1 ? "\n" : " ");
        else 
            cout << b[i] + 2 << (i == n - 1 ? "\n" : " ");
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
