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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<string> arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    string s; cin >> s;
    x--, y--;
    map<char, pair<int, int>> directions = {
        {'U', {-1, 0}}, 
        {'D', {1, 0}}, 
        {'L', {0, -1}}, 
        {'R', {0, 1}}
    };
    set<pair<int, int>> vis;
    for (char move : s) {
        int dx = directions[move].first;
        int dy = directions[move].second;
        int nx = x + dx;
        int ny = y + dy;

        if (nx >= 0 && nx < n && ny >= 0 && ny < m && arr[nx][ny] != '#') {
            x = nx;
            y = ny;
            if (arr[x][y] == '@') {
                vis.insert({x, y});
            }
        }
    }

    cout << (x + 1) << " " << (y + 1) << " " << vis.size() << endl;
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
