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
    vector<int>arr(n), pre(n,0), delta(n+1, 0);
    for(int i = 0; i<n; i++) cin>>arr[i];
    for(int i = 0; i<n; i++){
        if(i>0){
            pre[i] = pre[i-1]+delta[i];
            arr[i]+=pre[i];
        }
        int temp = min(n-i-1, arr[i]);
        arr[i]-=temp;
        delta[i+1]++;
        if(i+temp+1<n){
            delta[i+temp+1]--;
        }
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

signed main() {
    Aman();

    int tc = 1;
    while (tc--) {
        solve();
    }
    return 0;
}