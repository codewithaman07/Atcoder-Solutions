#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;

void solve() {
    int n,m; cin>>n>>m;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    vector<int>pre(n+1,0), temp(n+1,0);
    for(int i = 1; i<=n; i++){
        pre[i] = pre[i-1]+arr[i-1];
        temp[i] = temp[i-1]+ i*arr[i-1];
    }
    int ans = LLONG_MIN;
    for(int i = 0; i<=n-m; i++){
        int r = i+m;
        int num = (temp[r]-temp[i])- i*(pre[r]-pre[i]);
        ans = max(ans,num);
    }
    cout<<ans<<endl;
}

signed main() {
    cout << fixed << setprecision(20);
    Aman();

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}