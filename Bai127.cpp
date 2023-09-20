#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

void nhap(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        int n; cin >> n;
        int a1[n] = {};
        int a2[n] = {};
        nhap(a1, n); nhap(a2, n);
        int lmax = 0;
        for(int i = 0; i < n; i++) {
            int sum1 = 0;
            int sum2 = 0;
            int l = 0;
            for(int j = i; j < n; j++) {
                sum1 += a1[j];
                sum2 += a2[j];
                l++;
                if(sum1 == sum2) {
                    lmax = max(lmax, l);
                }
            }
        }
        cout << lmax << endl;
    }
    return 0;
}