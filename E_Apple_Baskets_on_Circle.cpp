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

bool fun(int m, vector<int>&arr, int &n, int &k){
    int sum = 0;
    for(int i = 0; i<n; i++) sum+=min(arr[i], m);
    return sum<=k;
}

void solve() {
    int n,k; cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    int l = 0, r = 1e12+9;
    while(r-l>1){
        int m = l+(r-l)/2;
        if(fun(m, arr, n, k)) l = m;
        else r = m;
    }
    for(int i = 0; i<n; i++){
        int temp = min(arr[i], l);
        k-=temp;
        arr[i]-=temp;
    }
    for(int i = 0; k>0; i++){
        if(arr[i]>0){
            arr[i]--;
            k--;
        }
    }
    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
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