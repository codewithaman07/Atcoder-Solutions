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
    int n,q; cin>>n>>q;
    unordered_map<int,int>mp;
    while(q--){
        int a,b; cin>>a>>b;
        if(a == 1) mp[b]++;
        else if(a == 2){
            mp[b]+=2;
        }
        else{
            if(mp[b]>=2) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }    
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