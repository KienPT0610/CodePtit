#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

struct NhanVien {
    string name;
    string gt;
    string date;
    string dc;
    string mst;
    string nkhd;
};

void nhap(NhanVien &a) {
    cin.ignore();
    getline(cin, a.name);
    cin >> a.gt >> a.date;
    cin.ignore();
    getline(cin, a.dc);
    cin >> a.mst >> a.nkhd;
}

void inds(NhanVien ds[], int N) {
    for(int i = 0; i < N; i++) {
        if(i < 9) {
            cout << "0000" << i + 1 << " ";
        } else {
            cout << "000" << i + 1 << " ";
        }
        cout << ds[i].name << " " << ds[i].gt << " ";
        cout << ds[i].date << " " << ds[i].dc << " ";
        cout << ds[i].mst << " " << ds[i].nkhd << endl;
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
    inds(ds,N);
    return 0;
}