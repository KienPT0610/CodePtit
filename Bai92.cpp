#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

class PhanSo {
private:
    ll tu, mau;
public:
    PhanSo(ll a, ll b);
    friend istream& operator >> (istream& in, PhanSo &a);
    friend ostream& operator << (ostream& out, PhanSo a);
    void rutgon();
};

PhanSo::PhanSo(ll a, ll b) {
    this->tu = a;
    this->mau = b;
}

istream& operator >> (istream& in, PhanSo &a) {
    in >> a.tu >> a.mau;
    return in;
}

ostream& operator << (ostream& out, PhanSo a) {
    cout << a.tu << "/" << a.mau;
    return out;
}

void PhanSo::rutgon() {
    ll x = __gcd(this->tu, this->mau);
    this->tu /= x;
    this->mau /= x;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}