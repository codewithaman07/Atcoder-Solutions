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
    vector<int>a(3);
    cin>>a[0]>>a[1]>>a[2];
    sort(all(a));
    if(a[0]+a[1] == a[2] || (a[0] == a[1] && a[1] == a[2])) cout<<"Yes\n";
    else cout<<"No\n";
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