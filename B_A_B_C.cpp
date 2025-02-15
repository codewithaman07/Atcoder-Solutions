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

void solve() {
    string s; cin>>s;
    int n = s.size(), cnt = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                if(s[i] == 'A' && s[j] == 'B' && s[k] == 'C' && (i+k == 2*j)){
                    cnt++;
                }
            }
        }
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