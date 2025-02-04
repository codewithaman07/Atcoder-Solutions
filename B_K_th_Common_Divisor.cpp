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
    int a,b,k; cin>>a>>b>>k;
    vector<int>v;
    int mini = min(a,b);
    for(int i = 1; i<=mini; i++){
        if(a%i == 0 && b%i == 0){
            v.pb(i);
        }
    }
    int n = v.size();
    cout<<v[n-k]<<endl;
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