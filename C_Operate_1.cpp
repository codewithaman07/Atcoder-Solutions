#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'

void solve() {
    int x; cin >> x;
    string a, b; cin >> a >> b;
    
    int n = a.size();
    int m = b.size();
    
    if (abs(n - m) > 1) {
        cout << "No" << endl;
        return;
    }

    if (a == b) {
        cout << "Yes" << endl;
        return;
    }

    if (n == m) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) cnt++;
        }
        if (cnt == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
        return;
    }

    if (n > m) swap(a, b); 
    int i = 0, j = 0, diff = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] != b[j]) {
            diff++;
            j++;
        } else {
            i++;
            j++;
        }
    }
    diff += (b.size() - j);

    if (diff == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}

signed main() {
    Aman();

    int tc = 1;
    while (tc--) {
        solve();
    }
    return 0;
}
