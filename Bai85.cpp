#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

struct SinhVien {
    string name;
    string lop;
    string date;
    db gpa;
};

void nhap(SinhVien &a) {
    getline(cin, a.name);
    cin >> a.lop;
    cin >> a.date;
    if(a.date[1] == '/') {
        a.date.insert(0, "0");
    }
    if(a.date[4] == '/') {
        a.date.insert(3, "0");
    }
    cin >> a.gpa;
}

void in(SinhVien a) {
    cout << "B20DCCN001 ";
    cout << a.name << " " << a.lop << " " << a.date << " ";
    cout << fixed << setprecision(2) << a.gpa << endl;
}
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}