#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

class SinhVien {
    private:
        string name, lop, ns;
        float gpa;
    public:
        void nhap();
        void xuat();
};

void SinhVien::nhap() {
    getline(cin, name);
    cin >> lop >> ns;
    if(ns[1] == '/') {
        ns.insert(0, "0");
    }
    if(ns[4] == '/') ns.insert(3, "0");
    cin >> gpa;
}

void SinhVien::xuat() {
    cout << "B20DCCN001 ";
    cout << name << " " << lop << " " << ns << " ";
    cout << fixed << setprecision(2) << gpa << endl;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}