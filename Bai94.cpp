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
    friend ostream& operator << (ostream& out, PhanSo);
    PhanSo operator + (const PhanSo& other) const;
    PhanSo operator - (const PhanSo& other) const;
};

PhanSo::PhanSo(ll a = 0, ll b = 1) {
    this->tu = a;
    this->mau = b;
}

istream& operator >> (istream& in, PhanSo &a) {
    in >> a.tu >> a.mau;
    return in;
}

ostream& operator << (ostream& out, PhanSo a) {
    cout << a.tu << "/" << a.mau << endl;
    return out;
}

PhanSo PhanSo::operator+(const PhanSo& other) const {
    ll Newtu = tu * other.mau + other.tu * mau;
    ll Newmau = mau * other.mau;
    ll x = __gcd(Newtu, Newmau);
    Newtu /= x;
    Newmau /= x; 
    return PhanSo(Newtu, Newmau);
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}