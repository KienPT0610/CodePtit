#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--)	{
        int n; cin >> n;
        int a[n] = {};
        for(int i = 0; i < n - 1; i++) {
            cin >> a[i];
        }
        sort(a, a + n - 1);
        for(int i = 1; i < n - 1; i++) {
            if(a[i - 1] + 1 < a[i]) {
                cout << a[i - 1] + 1;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}