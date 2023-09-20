#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

struct SinhVien {
    int id;
    string msv, ten, lop, email, dn;
};

void nhap(SinhVien &a) {
    cin.ignore();
    getline(cin, a.msv);
    getline(cin, a.ten);
    getline(cin, a.lop);
    getline(cin, a.email);
    cin >> a.dn;
}

bool cmp(SinhVien a, SinhVien b) {
    return a.ten < b.ten;
}

void in(SinhVien a) {
    cout << a.id << " " << a.msv << " ";
    cout << a.ten << " " << a.lop << " " << a.email << " " << a.dn << endl;
}


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    vector <SinhVien> vt;
    for(int i = 0; i < n; i++) {
        SinhVien a;
        nhap(a);
        a.id = i + 1;
        vt.push_back(a);
    }
    sort(vt.begin(), vt.end(), cmp);
    int q; cin >> q;
    while(q--) {
        string s; cin >> s;
        for(auto x : vt) {
            if(x.dn == s) {
                in(x);
            }
        }
    }
    return 0;
}