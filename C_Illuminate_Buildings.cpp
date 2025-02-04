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
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    map<int,vector<int>>mp;
    for(int i = 0; i<n; i++){
        mp[arr[i]].pb(i);
    }
    int maxi = 1;
    for(auto &[x, vec] : mp){
        int m = vec.size();
        if(m<=1) continue;
        vector<unordered_map<int,int>>dp(m);
        for(int i = 1; i<m; i++){
            for(int j = 0; j<i; j++){
                int diff = vec[i] - vec[j];
                dp[i][diff] = max(dp[i][diff], dp[j][diff]+1);
                maxi = max(maxi, dp[i][diff]+1);
            }
        }
    }
    cout<<maxi<<endl;
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

