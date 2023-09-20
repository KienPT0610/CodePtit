#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

void Swap(int a[], int n) {
    int l = 0, r = n - 1;
    while(l < r) {
        swap(a[l], a[r]);
        l++; r--;
    }
}

void xuli(string a, string b) {
    // 111891
    // 210000
    // dinh nghia xau a > b;
    int n1 = a.length(); int x[n1] = {};
    int n2 = b.length(); int y[n1] = {};
    int z[n1 + 1] = {}; int n = 0;
    for(int i = 0; i < n1; i++) x[i] = a[i] - '0';
    for(int i = 0; i < n2; i++) y[i] = b[i] - '0';
    Swap(x, n1); Swap(y, n2);
    for(int i = n2; i < n1; i++) y[i] = 0;
    int nho = 0;
    for(int i = 0; i < n1; i++) {
        z[n++] = (x[i] + y[i] + nho) % 10;
        nho = (x[i] + y[i] + nho) / 10;
    }
    if(nho != 0) {
        z[n++] = nho;
    }
    for(int i = n - 1; i >= 0; i--) {
        cout << z[i];
    }
    cout << endl;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        string a, b;
        cin >> a >> b;
        if(a.length() > b.length()) {
            xuli(a, b);
        } else {
            xuli(b, a);
        }   
    }
    return 0;
}