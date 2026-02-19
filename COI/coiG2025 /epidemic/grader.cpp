#include "epidemic.h"
#include <bits/stdc++.h>
using namespace std;

vector<int> al[202];
int n;
bool ans;

void init() {
  int m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    al[x].push_back(y);
    al[y].push_back(x);
  }

  vector<int> visited(n, 0);
  function<void(int)> dfs = [&](int node) {
    visited[node] = 1;
    for (auto &neighbor : al[node]) {
      if (!visited[neighbor]) {
        dfs(neighbor);
      }
    }
  };
  dfs(0);
  ans = true;
  for (int i = 0; i < n; ++i) {
    if (!visited[i]) {
      ans = false;
      break;
    }
  }
}

int queries = 0;
int ask(set<int> query) {
  queries++;
  set<int> ans;
  for (auto i : query) {
    for (int j = 0; j < al[i].size(); j++) {
      if (query.count(al[i][j]) == 0) {
        ans.insert(al[i][j]);
      }
    }
  }
  cout << "ask({";
  for (auto v : query) {
    cout << v << " ";
  }
  cout << "}) = " << ans.size() << "\n";
  return ans.size();
}

void reset() {
  for (int i = 0; i < 202; i++)
    al[i].clear();
}

bool check_string(string s) {
  if (s.size() != n)
    return false;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != '0' && s[i] != '1')
      return false;
  }
  return true;
}

#define IS_CONNECTED(x) (x ? "Connected" : "Disconnected")

int main() {
  init();
  bool uans = solve(n);
  if (uans != ans) {
    cerr << "Wrong answer (guessed " << IS_CONNECTED(uans) << " but answer is "
         << IS_CONNECTED(ans) << ")" << endl;
  } else {
    cerr << "Correct answer (guessed " << IS_CONNECTED(uans)
         << " and answer is " << IS_CONNECTED(ans) << ")" << endl;
  }
  cerr << "Number of queries: " << queries << endl;
}
