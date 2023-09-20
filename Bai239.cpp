#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

class KhachHang {
    public: 
        string maKH, tenKH, gioiTinh, ngaySinh, diaChi;
    friend istream& operator >> (istream& is, KhachHang &a); 
};

ll sttKH = 1;
vector <KhachHang> Customer;
istream& operator >> (istream& is, KhachHang &a) {
    scanf("\n");
    getline(is, a.tenKH);
    if(a.tenKH[a.tenKH.length() - 1] == ' ') a.tenKH.pop_back();
    is >> a.gioiTinh >> a.ngaySinh;
    cin.ignore();
    getline(is, a.diaChi);
    // xu li ma Khach Hang
    string s = to_string(sttKH++);
    while(s.length() < 3) {
        s = "0" + s;
    }
    s = "KH" + s;
    a.maKH = s;
    Customer.push_back(a);
    return is;
}

class MatHang {
    public: 
        string maMH, tenMH, donVi;
        ll giaMua = 0, giaBan = 0;
    friend istream& operator >> (istream& is, MatHang &a); 
};
ll sttMH = 1;
vector <MatHang> Product;
istream& operator >> (istream& is, MatHang &a) {
    scanf("\n");
    getline(is, a.tenMH);
    getline(is, a.donVi);
    is >> a.giaMua >> a.giaBan;
    // xu li ma Mat Hang
    string s = to_string(sttMH++);
    while(s.length() < 3) {
        s = "0" + s;
    }
    s = "MH" + s;
    a.maMH = s;
    Product.push_back(a);
    return is;
}

ll sttHD = 1;
class HoaDon {
    public:
        string maHD, maKhachHang, maMatHang;
        ll soLuong = 0, loiNhuan = 0, thanhTien = 0;
    friend istream& operator >> (istream& is, HoaDon &a) {
        scanf("\n");
        is >> a.maKhachHang >> a.maMatHang;
        is >> a.soLuong;
        // xu li ma Hoa Don
        string s = to_string(sttHD++);
        while(s.length() < 3) {
            s = "0" + s;
        }
        s = "HD" + s;
        a.maHD = s;
        for(auto x : Product) {
            if(x.maMH == a.maMatHang) {
                a.loiNhuan = (x.giaBan - x.giaMua) * a.soLuong;
                a.thanhTien = x.giaBan * a.soLuong;
            }
        }
        return is;
    }
    friend ostream& operator << (ostream& os, HoaDon a) {
        os << a.maHD << " ";
        for(auto x : Customer) {
            if(x.maKH == a.maKhachHang) {
                os << x.tenKH << " " << x.diaChi << " ";
                break; 
            }
        }
        for(auto x : Product) {
            if(x.maMH == a.maMatHang) {
                os << x.tenMH << " ";
                break;
            }
        }
        os << a.soLuong << " " << a.thanhTien << " " << a.loiNhuan << endl;
        return os;
    }
};

bool cmp(HoaDon a, HoaDon b) {
    return a.loiNhuan > b.loiNhuan;
}

void sapxep(HoaDon dshd[], int K) {
    sort(dshd, dshd + K, cmp);
}

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}