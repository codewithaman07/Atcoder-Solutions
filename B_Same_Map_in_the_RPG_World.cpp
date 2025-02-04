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
    int n,m; cin>>n>>m;
    vector<string>a(n), b(n);
    for(auto &i : a) cin>>i;
    for(auto &i : b) cin>>i;
    for(int x = 0; x<n; x++){
        for(int y = 0; y<m; y++){
            int f = 1;
            for(int i = 0; i<n; i++){
                for(int j = 0; j<m; j++){
                    if(a[(i-x+n)%n][(j-y+m)%m] != b[i][j]){
                        f = 0;
                        break;
                    }
                }
            }
            if(f){
                cout<<"Yes\n";
                return;
            }
        }
    }
    cout<<"No"<<endl;
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