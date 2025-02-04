#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin>>n;
    ll mx=LLONG_MIN;
    ll s=0;
    ll sum=0;
    for(ll i=0;i<n;i++){
        ll el; cin>>el;
        mx=max(el,mx);
        s=s+el;
        sum=sum+s;
        cout<<sum+(mx*(i+1))<<endl;
    }
}