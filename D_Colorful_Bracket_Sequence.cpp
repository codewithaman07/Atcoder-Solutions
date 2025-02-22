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
    stack<char>st;
    int n = s.size();
    st.push(s[0]);
    for(int i = 1; i<n; i++){
        if(!st.empty()){
            if((s[i] == ')' && st.top() == '(') || (s[i] == ']' && st.top() == '[') || (s[i] == '>' && st.top() == '<')){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        else{
            st.push(s[i]);
        }
    }
    if(st.empty()) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

signed main() {
    cout << fixed << setprecision(20);
    Aman();

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}