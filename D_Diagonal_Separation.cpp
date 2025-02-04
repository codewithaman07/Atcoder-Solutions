#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using P = pair<int, int>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(a) (a).begin(),(a).end()
const int INF = 1e9;
const ll LINF = 1e18;

int main(){
  // ios::sync_with_stdio(false);
  // cin.tie(0);
  int n,m; cin >> n >> m;
  vector<pair<P,char>> pts;
  rep(i,m){
    int x,y;
    char c; cin >> x >> y >> c;
    pts.push_back({P{x,y},c});
  }
  sort(all(pts)); // sort
  bool isok=true;
  int miny=INF;
  pair<P,char> last = {P{INF,INF},'X'};
  for(auto v : pts){
    if(v.second=='W'){
      miny=min(miny,v.first.second);
    }else if(v.second=='B'){
      if(miny <= v.first.second){
        isok=false;
        break;
      }
    }
  }

  if(isok){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}