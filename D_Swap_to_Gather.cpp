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
    int n; cin>>n;
    string s; cin>>s;
    int ans = 0;
    vector<int>temp;
    for(int i = 0; i<n; i++){
        if(s[i] == '1') temp.pb(i);
    }
    int m = temp.size();
    int mid = m/2;
    for(int i = 0; i<m; i++){
        ans+=abs(temp[i] - (temp[mid] - (mid - i)));
    }
    cout<<ans<<endl;
}

signed main() {
    cout << fixed << setprecision(20);
    Aman();

    int tc = 1;
    while (tc--) {
        solve();
    }
    return 0;
}