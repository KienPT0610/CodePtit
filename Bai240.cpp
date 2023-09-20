#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

int n, m;
int a[101][101];
int d[101][101] = {};
pair <int, int> p[2] = {{1, 0}, {0, 1}};

int cnt = 0;

void dfs(int x, int y) {
    for(int i = 0; i < 2; i++) {
        int si = x + p[i].first;
        int sj = y + p[i].second;
        d[si][sj] = d[x][y] + a[si][sj];
        cout << d[si][sj] << endl;
        if(si >= 0 && si < n && sj >= 0 && sj < n) {
            if(si == n - 1 && sj == n - 1) {
                if(d[si][sj] == m) cnt++;
                continue;
            }
            dfs(si, sj);
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        cin >> n >> m;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        d[0][0] = a[0][0];
        dfs(0, 0);
        cout << cnt << endl;
    }
    return 0;
}