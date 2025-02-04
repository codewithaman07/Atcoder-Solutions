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
    vector<int> a,b;
    f(0,n){
        int x; cin>>x;
        if(x&1) a.pb(x);
        else b.pb(x);
    }
    sort(all(a));
    sort(all(b));
    int x = -1, y = -1, maxi = -1;
    if(a.size()>=2){
        x = a[a.size()-1]+a[a.size()-2];
    }
    if(b.size()>=2){
        y = b[b.size()-1]+b[b.size()-2];
    }
    maxi = max(x,y);
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