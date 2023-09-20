#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

struct NhanVien{
    string name;
    string gt;
    string date;
    string address;
    string mst;
    string nkhd;
};

void nhap(NhanVien &a) {
    getline(cin, a.name);
    cin >> a.gt;
    cin >> a.date;
    cin.ignore();
    getline(cin, a.address);
    cin >> a.mst >> a.nkhd;
}

void in(NhanVien a) {
    cout << "00001 ";
    cout << a.name << " " << a.gt << " " << a.date << " " << a.address << " " << a.mst << " " << a.nkhd << endl;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}