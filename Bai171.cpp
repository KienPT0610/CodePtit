#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

struct NhanVien {
    string ten, gt, ns, dc, mst, nkhd; 
    string id;
    int dd, mm, yyyy;
};

bool cmp(NhanVien a, NhanVien b) {
    if(a.yyyy != b.yyyy) return a.yyyy < b.yyyy;
    else {
        if(a.mm != b.mm) return a.mm < b.mm;
    }
    return a.dd < b.dd;
}

void XuLiDate(NhanVien &a) {
    string s = a.ns;
    string dd, mm, yyyy;
    dd = s.substr(3, 2);
    mm = s.substr(0, 2);
    yyyy = s.substr(6, 4);
    a.dd = stoi(dd);
    a.mm = stoi(mm);
    a.yyyy = stoi(yyyy);
}

int num = 1;

void nhap(NhanVien &a) {
    if(num == 1) cin.ignore();
    a.id = string(5 - to_string(num).length(), '0') + to_string(num);
    num++;
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
    XuLiDate(a);
    getline(cin, a.dc);
    getline(cin, a.mst);    
    getline(cin, a.nkhd);
}

void sapxep(NhanVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

void inds(NhanVien ds[], int n) {
    for(int i = 0; i < n; i++) {
        cout << ds[i].id << " " << ds[i].ten << " ";
        cout << ds[i].gt << " " << ds[i].ns << " " << ds[i].dc << " ";
        cout << ds[i].mst << " " << ds[i].nkhd << endl;
        // cout << ds[i].dd << " " << ds[i].mm << " " << ds[i].yyyy << " " << endl;
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}