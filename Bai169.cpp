#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

struct SinhVien {
    string id, ten, lop, ns;
    float gpa;
};

bool cmp(SinhVien a, SinhVien b) {
    return a.gpa > b.gpa;
}

string ChuanHoaName(string name) {
    string s = "";
    stringstream ss(name);
    string tmp;
    while(ss >> tmp) {
        for(int i = 0; i < tmp.length(); i++) {
            if(i == 0) {
                s += toupper(tmp[i]);
            } else {
                s += tolower(tmp[i]);
            }
        }
        s += " ";
    }
    s.erase(s.length() - 1);
    return s;
}

void nhap(SinhVien ds[], int N) {
    for(int i = 1; i <= N; i++) {
        ds[i].id = "B20DCCN" + string(3 - to_string(i).length(), '0') + to_string(i);
        cin.ignore();
        getline(cin, ds[i].ten);
        ds[i].ten = ChuanHoaName(ds[i].ten);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].ns);
        if(ds[i].ns[1] == '/') ds[i].ns.insert(0, "0");
        if(ds[i].ns[4] == '/') ds[i].ns.insert(3, "0");
        cin >> ds[i].gpa;
    }
}

void sapxep(SinhVien ds[], int N) {
    sort(ds + 1, ds + N + 1, cmp);
}

void in(const SinhVien ds[], int N) {
    for(int i = 1; i <= N; i++) {
        cout << ds[i].id << " ";
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
    sapxep(ds,N);
    in(ds, N);
    return 0;
}