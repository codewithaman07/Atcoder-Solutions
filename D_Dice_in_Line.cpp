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
    int n,k; cin>>n>>k;
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    double curr = 0;
    for(int i = 0; i<k; i++){
        curr+=(arr[i]+1)/2.0;
    }
    double maxi = curr;
    for(int i = k; i<n; i++){
        curr+=(arr[i]+1)/2.0;
        curr-=(arr[i-k]+1)/2.0;
        maxi = max(maxi, curr);
    }
    cout<< fixed << setprecision(12)<<maxi<<endl;
}

signed main() {
    Aman();
    int tc = 1;
    while (tc--) {
        solve();
    }
    return 0;
}