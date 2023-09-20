#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        int n; cin >> n;
        int a[n][n] = {};
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        set <int> st;
        for(int i = 0; i < n; i++) {
            int cnt2 = 0;
            for(int j = 1; j < n; j++) {
                for(int k = 0; k < n; k++) {
                    if(a[j][k] == a[0][i]) {
                        cnt2++;
                        break;
                    }
                }
            }
            if(cnt2 == n - 1) {
                st.insert(a[0][i]);
            }
        }
        cout << st.size() << endl;
    }
    return 0;
}