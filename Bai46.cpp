#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

void Nhap(int A[51][51], int a, int b) {
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cin >> A[i][j];
        }
    }
}

int main() {
    int n, m, p; cin >> n >> m >> p;
    int A[51][51] = {};
    int B[51][51] = {};
    Nhap(A, n, m);
    Nhap(B, m, p);
    int C[n][p] = {};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            for(int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j]; 
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}