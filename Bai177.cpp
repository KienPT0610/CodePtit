#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

struct SinhVien {
    int id;
    string msv, ten, lop, email, dn;

    void nhap() {
        getline(cin, msv);
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, email);
        getline(cin, dn);
    }

    void in() {
        cout << id << " " << msv << " " << ten << " " << lop << " " << email << " " << dn << endl;
    }
};

bool cmp(SinhVien a, SinhVien b) {
    return a.msv < b.msv;
}

void solve(SinhVien ds[], int n) {
    string s; cin >> s;
    for(int i = 0; i < n; i++) {
        if(ds[i].dn == s) {
            ds[i].in();
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    cin.ignore();
    SinhVien ds[n];
    for(int i = 0; i < n; i++) {
        ds[i].nhap();
        ds[i].id = i + 1;
    }
    sort(ds, ds + n, cmp);
    int q; cin >> q;
    for(int i = 0; i < q; i++) {
       solve(ds, n);
    }
    return 0;
}