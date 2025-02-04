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
    int n,d; cin>>n>>d;
    vector<vector<int>>arr(n, vector<int>(2,0));
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    for(int i = 1; i<=d; i++){
        int maxi = INT_MIN;
        for(int j = 0; j<n; j++){
            maxi = max(maxi, arr[j][0]*(arr[j][1]+i));
        }
        cout<<maxi<<endl;
    }
}

signed main() {
    Aman();

    int tc = 1;
    while (tc--) {
        solve();
    }
    return 0;
}