#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

int stt = 1;

class SinhVien {
public: 
    string msv, ten, ns, lop;
    float gpa;
    friend istream& operator >> (istream& in, SinhVien &a) {
        scanf("\n");
        getline(in, a.ten);
        // chuan hoa ten
        stringstream ss(a.ten);
        string s = "", tmp;
        while(ss >> tmp) {
            transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
            tmp[0] = toupper(tmp[0]);
            s += tmp + " ";
        }
        s.pop_back();
        a.ten = s;
        in >> a.lop >> a.ns >> a.gpa;
        //chuan hoa nsinh
        if(a.ns[1] == '/') a.ns.insert(0, "0");
        if(a.ns[4] == '/') a.ns.insert(3, "0");

        //chuan hoa msv
        a.msv = "B20DCCN" + string(3 - to_string(stt).length(), '0') + to_string(stt);
        stt++;
        return in;
    }

    friend ostream& operator << (ostream& os, SinhVien a) {
        cout << a.msv << " " << a.ten << " " << a.lop << " " << a.ns << " ";
        cout << fixed << setprecision(2) << a.gpa << endl;
        return os; 
    }
};

bool cmp(SinhVien a, SinhVien b) {
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int N) {
    sort(ds, ds + N, cmp);
}

int main() {
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}