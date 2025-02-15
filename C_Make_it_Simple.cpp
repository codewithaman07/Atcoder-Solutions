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

struct PairHash {
    size_t operator()(const pair<int, int>& p) const {
        return (long long)p.first * 31LL + p.second;
    }
};

void solve() {
    int n,m; cin>>n>>m;
    unordered_set<pair<int,int>, PairHash> s;
    int cnt = 0;
    for(int i = 0; i<m; i++){
        int u,v; cin>>u>>v;
        if(u == v){
            cnt++;
            continue;
        }
        pair<int,int>e = {min(u,v), max(u,v)};
        if(s.count(e)) cnt++;
        else s.insert(e);
    }
    cout<<cnt<<endl;
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