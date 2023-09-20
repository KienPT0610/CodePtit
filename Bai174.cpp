#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

struct DanhSach {
    string name;
    int day, month, year;
};

void nhap(DanhSach &a) {
    cin >> a.name;
    char slash = '/';
    std::cin >> a.day >> slash >> a.month >> slash >> a.year;
}

bool cmp(DanhSach a, DanhSach b) {
    if(a.year != b.year) {
        return a.year < b.year;
    }   
    if(a.month != b.month) {
        return a.month < b.month;
    }
    return a.day < b.day;
}

void sapxep(DanhSach ds[], int n) {
    sort(ds, ds + n, cmp);
}

void in(DanhSach a) {
    cout << a.name << endl;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    struct DanhSach *ds = new DanhSach[n];
    for(int i = 0; i < n; i++) {
        nhap(ds[i]);
    }
    sapxep(ds, n);
    in(ds[n - 1]);
    in(ds[0]);
    return 0;
}