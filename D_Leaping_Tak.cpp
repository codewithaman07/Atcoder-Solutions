#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 998244353;
const int N = 1e6 + 1;


void solve() {
    int n,k; cin>>n>>k;
    vector<pair<int,int>>arr(k);
    for(int i=0;i<k;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    vector<int>dp(n+1,0);
    vector<int>pre(n+1,0);
    dp[1] = 1;
    pre[1] = 1;
    for(int i = 2; i<=n; i++){
        int ans = 0;
        for(auto &it : arr){
            int l = it.first;
            int r = it.second;
            ans = (ans + (pre[max(i-l,0ll)] - pre[max(i-r-1,0LL)] + M)%M)%M;
        }
        dp[i] = ans;
        pre[i] = (pre[i-1] + dp[i])%M;
    }
    cout<<dp[n]<<endl;
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