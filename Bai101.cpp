#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

struct SinhVien {
    string ten, lop, ns;
    float gpa;
};

void nhapThongTinSV(SinhVien &a) {
    getline(cin, a.ten);
    cin >> a.lop >> a.ns;
    if(a.ns[1] == '/') a.ns.insert(0, "0");
    if(a.ns[4] == '/') a.ns.insert(3, "0");
    cin >> a.gpa;
}

void inThongTinSV(SinhVien a) {
    cout << "N20DCCN001 ";
    cout << a.ten << " " << a.lop << " " << a.ns << " ";
    cout << fixed << setprecision(2) << a.gpa << endl;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}