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
    map<int,int>mp;
    for(int i = 0; i<4; i++){
        int x; cin>>x;
        mp[x]++;
    }
    if(mp.size()>2){
        cout<<"No"<<endl;
        return;
    }
    if(mp.size() == 1){
        cout<<"No"<<endl;
        return;
    }
    if(mp.size() == 2){
        int a = mp.begin()->second;
        int b = mp.rbegin()->second;
        if(a == 2 or b == 2){
            cout<<"Yes"<<endl;
            return;
        }
        else if(a == 1 && b == 3 || a == 3 && b == 1){
            cout<<"Yes"<<endl;
            return;
        }
        else{
            cout<<"No"<<endl;
            return;
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