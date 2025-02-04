#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 3e5 + 1;

int func(int n){
    return n*(n-1)/2;
}

void solve() {
    int n; cin>>n;
    vector<int>v(n);
    f(0,n) cin>>v[i];
    unordered_map<int,int>freq;
    for(int i = 0; i<n; i++){
        freq[v[i]]++;
    }
    int ans = 0;
    for(auto it : freq){
        if(it.second > 1){
            ans += func(it.second);
        }
    }
    cout<<func(n) - ans<<endl;
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