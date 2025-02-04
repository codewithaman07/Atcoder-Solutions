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
    vector<int>arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    sort(all(arr));
    int cnt = 0;
    int j = 0;
    for(int i = 0; i<n; i++){
        while(j<n && arr[j] < arr[i]*2) j++;
        cnt+=(n-j);
    }
    cout<<cnt<<endl;
}

signed main() {
    Aman();

    int tc = 1;
    while (tc--) {
        solve();
    }
    return 0;
}