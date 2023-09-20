#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

class NhanVien {
private:
    string ten, gt, ns, dc, mst, nkhd;
public:
    friend istream& operator >> (istream& in, NhanVien &a);
    friend ostream& operator << (ostream& out, NhanVien a);
};

istream& operator >> (istream& in, NhanVien &a) {
    getline(in, a.ten);
    in >> a.gt >> a.ns;
    in.ignore();
    getline(in, a.dc);
    in >> a.mst >> a.nkhd;
    return in;
}

ostream& operator << (ostream& out, NhanVien a) {
    cout << "00001 ";
    cout << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nkhd << endl;
    return out;
}


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}