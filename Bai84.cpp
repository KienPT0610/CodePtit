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

void rutgon(PhanSo &p) {
    ll x = __gcd(p.mau, p.tu);
    p.tu /= x;
    p.mau /= x;
}

void in(PhanSo p) {
    cout << p.tu << "/" << p.mau << endl;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
    return 0;
}