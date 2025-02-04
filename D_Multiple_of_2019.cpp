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
    string s; cin>>s;
    int n = s.size(), cnt = 0;
    int rem = 0, p = 1;
    map<int,int>mp;
    mp[0] = 1;
    for(int i = n-1; i>=0; i--){
        rem = (rem+(s[i]-'0')*p)%2019;
        cout<<"rem: "<<rem<<endl;
        p = (p*10)%2019;
        cnt+=mp[rem];
        mp[rem]++;
    }
    cout<<cnt<<endl;
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