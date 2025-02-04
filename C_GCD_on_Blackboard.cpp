#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;


void solve() {
    int n; cin>>n;
    int arr[n], pre[n], suf[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    pre[0] = arr[0];
    suf[n-1] = arr[n-1];
    for(int i = n-2; i>=0; i--) suf[i] = __gcd(suf[i+1], arr[i]);
    for(int i = 1; i<n; i++) pre[i] = __gcd(pre[i-1], arr[i]);
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(i == 0) ans = max(ans, suf[i+1]);
        else if(i == n-1) ans = max(ans, pre[i-1]);
        else ans = max(ans, __gcd(pre[i-1], suf[i+1]));
    }
    cout<<ans<<endl;
}

signed main() {
    Aman();

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}