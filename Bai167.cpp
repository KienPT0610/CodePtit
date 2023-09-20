#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

struct SinhVien {
    string ten, lop, ns;
    float gpa;
};

void nhap(SinhVien ds[50], int N) {
    for(int i = 1; i <= N; i++) {
        cin.ignore();
        getline(cin, ds[i].ten);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].ns);
        if(ds[i].ns[1] == '/') ds[i].ns.insert(0, "0");
        if(ds[i].ns[4] == '/') ds[i].ns.insert(3, "0");
        cin >> ds[i].gpa;
    }
}

void in(SinhVien ds[], int N) {
    for(int i = 1; i <= N; i++) {
        cout << "B20DCCN";
        cout << string(3 - to_string(i).length(), '0') + to_string(i) << " ";
        cout << ds[i].ten << " " << ds[i].lop << " " << ds[i].ns << " ";
        cout << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}