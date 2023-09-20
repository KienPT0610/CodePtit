#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

struct MatHang {
    int id;
    string ten, nhom;
    db giaban, giamua;
    db loinhuan;
};

bool cmp(MatHang a, MatHang b) {
    return a.loinhuan > b.loinhuan;
}

void nhap(MatHang ds[], int n) {
    for(int i = 0; i < n; i++) {
        ds[i].id = i + 1;
        cin.ignore();
        getline(cin, ds[i].ten);
        getline(cin, ds[i].nhom);
        cin >> ds[i].giamua >>ds[i].giaban; 
        ds[i].loinhuan = ds[i].giaban - ds[i].giamua;
    }
}

void sapxep(MatHang ds[], int n) {
    sort(ds, ds + n, cmp);
}

void in(MatHang ds[], int n) {
    for(int i = 0; i < n; i++) {
        cout << ds[i].id << " ";
        cout << ds[i].ten << " " << ds[i].nhom << " ";
        cout << fixed << setprecision(2) << ds[i].loinhuan << endl;
    }
}


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    struct MatHang ds[50];
    nhap(ds, n);
    sapxep(ds, n);
    in(ds, n);
    return 0;
}