#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int n; cin >> n;
    int a[n][3] = {};
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int cnt0 = 0, cnt1 = 0;
        for(int j = 0; j < 3; j++) {
            cin >> a[i][j];
            if(a[i][j] == 0) cnt0++;
            else cnt1++;
        }
        if(cnt1 > cnt0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}