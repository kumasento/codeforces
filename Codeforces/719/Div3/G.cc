#include <bits/stdc++.h>
using namespace std;
#define LL long long
 
int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
 
  // int n, m, w; cin >> n >> m >> w;
  // vector cells(n, vector<LL>(m));
  // for (int i = 0; i < n; i ++)
  //   for (int j = 0; j < m; j ++)
  //     cin >> cells[i][j];
 
  // vector vis(n, vector<bool>(m, false));
 
  // queue<tuple<int, int, LL>> q1, q2;
  // q1.push({0, 0, 0});
  // vis[0][0] = true;
  // if (cells[0][0] > 0)
  //   cmap1[{0, 0}] = 0;
 
  // int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
 
  // LL bst = LONG_LONG_MAX;
 
  // while (!q1.empty()) {
  //   int i, j; LL c; tie(i, j, c) = q1.front(); q1.pop();
 
  //   if (i == n - 1 && j == m - 1) {
  //     bst = min(bst, c);
  //     break;
  //   }
 
  //   for (auto d : dirs) {
  //     int x, y; x = d[0] + i, y = d[1] + j;
  //     if (x < 0 || x >= n || y < 0 || y >= m)
  //       continue;
  //     if (vis[x][y] || cells[x][y] == -1)
  //       continue;
  //     vis[x][y] = true;
  //     q1.push({x, y, c + w});
  //   }
  // }
 
  // q2.push({n - 1, m - 1, 0});
  // for (int i = 0; i < n; i ++)
  //   for (int j = 0; j < m; j ++)
  //     vis[i][j] = false;
  // vis[n - 1][m - 1] = true;
  
  // while (!q2.empty()) {
  //   int i, j; LL c; tie(i, j, c) = q2.front(); q2.pop();
 
  //   for (auto d : dirs) {
  //     int x, y; x = d[0] + i, y = d[1] + j;
  //     if (x < 0 || x >= n || y < 0 || y >= m)
  //       continue;
  //     if (vis[x][y] || cells[x][y] == -1)
  //       continue;
  //     vis[x][y] = true;
  //     q2.push({x, y, c + w});
  //   }
  // }

  // pair<int, int> bstp1, bstp2;
  // LL bst1 = LONG_LONG_MAX, bst2 = LONG_LONG_MAX;

  // for (int i = 0; i < n; i ++) {
  //   for (int j = 0; j < m; j ++) {
  //     LL cost = it.second + cells[it.first.first][it.first.second];
  //     bst1 = min(cost, bst1);
  //   }
  // }

  // for (auto &it : cmap2) {
  //   if (it.second < bst2) {
  //     bst2 = it.second;
  //     bstp2 = it.first;
  //   }
  // }

  // bst
  // if (bst == LONG_LONG_MAX)
  //   cout << -1 << endl;
  // else
  //   cout << bst << endl;
}
