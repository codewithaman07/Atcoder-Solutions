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
    int arr[n], sum = 0;
    for(int i=0; i<n; i++) cin>>arr[i], sum+=arr[i];
    int ans = sum, sum2 = 0;
    for(int i = 0; i<n; i++){
        sum2+=arr[i];
        ans = min(ans, abs(sum2+sum2-sum));
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