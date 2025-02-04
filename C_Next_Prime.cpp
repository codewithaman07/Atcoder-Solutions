#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e6 + 1;

vector<bool>prime(M,true);
void solve() {
    prime[0] = prime[1] = 0;
    for(int i = 2; i*i<=M; i++){
        if(prime[i]){
            for(int j = i*i; j<=M; j+=i){
                prime[j] = 0;
            }
        }
    }
}

signed main() {
    Aman();
    int n; cin>>n;
    solve();
    for(int i = n; i<=M; i++){
        if(prime[i]){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}