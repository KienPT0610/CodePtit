#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

struct PhanSo {
    ll tu, mau;
};

PhanSo Sum(PhanSo a, PhanSo b) {
    PhanSo c;
    c.tu = a.tu * b.mau + a.mau * b.tu;
    c.mau = a.mau * b.mau;
    ll x = __gcd(c.tu, c.mau);
    c.tu /= x; c.mau /= x;
    c.tu = pow(c.tu, 2); c.mau = pow(c.mau, 2);
    return c;
}

PhanSo Tich(PhanSo a, PhanSo b, PhanSo c) {
    PhanSo d;
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    ll x = __gcd(d.tu, d.mau);
    d.tu /= x; d.mau /= x;
    return d;
}

void process(PhanSo a, PhanSo b) {
    PhanSo c = Sum(a, b);
    cout << c.tu << "/" << c.mau << " ";
    PhanSo d = Tich(a, b, c);
    cout << d.tu << "/" << d.mau << endl;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
    }
    return 0;
}   