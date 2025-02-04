#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x, n) for (int i = x; i < n; i++)
#define all(x) x.begin(), x.end()
const int M = 1e9 + 7;
const int N = 1e6 + 1;

const vector<pair<int, int>> hm = {{0, -1}, {0, 1}};
const vector<pair<int, int>> vm = {{-1, 0}, {1, 0}};

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) cin>>arr[i];
    pair<int, int> start, goal;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 'S') start = {i, j};
            if (arr[i][j] == 'G') goal = {i, j};
        }
    }
    queue<tuple<int, int, int, bool>> q; 
    set<tuple<int, int, bool>> vis;
    q.push({start.first, start.second, 0, 0}); 
    vis.insert({start.first, start.second, 0});
    q.push({start.first, start.second, 0, 1}); 
    vis.insert({start.first, start.second, 1});

    while (!q.empty()) {
        auto [r, c, steps, dir] = q.front();
        q.pop();
        if (r == goal.first && c == goal.second) {
            cout << steps << endl;
            return;
        }
        const auto &mvs = dir ? vm : hm; 
        for (auto &[dr, dc] : mvs) {
            int nr = r + dr, nc = c + dc;
            if (nr >= 0 && nr < n && nc >= 0 && nc < m && arr[nr][nc] != '#' && !vis.count({nr, nc, !dir})) {
                vis.insert({nr, nc, !dir});
                q.push({nr, nc, steps + 1, !dir});
            }
        }
    }
    cout << -1 << endl;
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
