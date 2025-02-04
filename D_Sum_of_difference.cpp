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
    int arr[n], pre[n];
    f(0,n) cin>>arr[i];
    sort(arr,arr+n);
    pre[0] = arr[0];
    f(1,n) pre[i] = pre[i-1] + arr[i];
    int ans = 0;
    for(int i = 1; i<n; i++){
        int x = arr[i-1]*(n-i);
        int y = pre[n-1] - pre[i-1];
        ans += abs(x - y);
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