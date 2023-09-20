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
        friend istream& operator >> (istream& in, SinhVien &a);
        friend ostream& operator << (ostream& out, SinhVien a);
};

istream& operator >> (istream& in, SinhVien &a) {
    getline(in, a.name);
    in >> a.lop >> a.ns;
    if(a.ns[1] == '/') a.ns.insert(0, "0");
    if(a.ns[4] == '/') a.ns.insert(3, "0");
    in >> a.gpa;
    return in;
}
 
ostream& operator << (ostream& out, SinhVien a) {
    cout << "B20DCCN001 ";
    cout << a.name << " " << a.lop << " " << a.ns << " ";
    cout << fixed << setprecision(2) << a.gpa << endl;
    return out;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}