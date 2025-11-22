#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) cin >> grid[i];

    pair<int,int> start, target;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 'Q') start = {i, j};
            if (grid[i][j] == 'K') target = {i, j};
        }
    }

    vector<vector<int>> dist(n, vector<int>(n, -1));
    queue<pair<int,int>> q;

    dist[start.first][start.second] = 0;
    q.push(start);

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            while (nx >= 0 && ny >= 0 && nx < n && ny < n && grid[nx][ny] != '#') {
                if (dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
                nx += dx[dir];
                ny += dy[dir];
            }
        }
    }

    cout << dist[target.first][target.second] << endl;
    return 0;
}
