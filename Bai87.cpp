#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

struct PhanSo {
    ll tu, mau;
};

void nhap(PhanSo &p) {
    cin >> p.tu >> p.mau;
}

PhanSo tong(PhanSo p, PhanSo q) {
    PhanSo C;
    C.tu = p.tu * q.mau + p.mau * q.tu;
    C.mau =  p.mau * q.mau;
    ll x = __gcd(C.tu, C.mau);
    C.tu /= x;
    C.mau /= x;
    return C;
}

void in(PhanSo t) {
    cout << t.tu << "/" << t.mau << endl;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}