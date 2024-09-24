#include<bits/stdc++.h>

using namespace std;

const int nax = (int)(201);

struct Matrix {
    int c[nax][nax];
    Matrix() {
        for (int i = 0; i < nax; ++i) {
            for (int j = 0; j < nax; ++j) {
                c[i][j] = 0;
            }
        }
    }
};

Matrix operator+ (Matrix a, Matrix b) {
    Matrix res;
    for (int i = 0; i < nax; ++i) {
        for (int j = 0; j < nax; ++j) {
            res.c[i][j] = a.c[i][j] + b.c[i][j];
        }
    }
    return res;
}

Matrix operator- (Matrix a, Matrix b) {
    Matrix res;
    for (int i = 0; i < nax; ++i) {
        for (int j = 0; j < nax; ++j) {
            res.c[i][j] = a.c[i][j] - b.c[i][j];
        }
    }
    return res;
}

Matrix operator* (Matrix a, Matrix b) {
    Matrix res;
    for (int i = 0; i < nax; ++i) {
        for (int j = 0; j < nax; ++j) {
            res.c[i][j] = 0;
            for (int k = 0; k < nax; ++k) {
                res.c[i][j] += a.c[i][k] * b.c[k][j];
            }
        }
    }
    return res;
}

int32_t main() {
    int n;
    cin >> n;
    Matrix a, b;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a.c[i][j];
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> b.c[i][j];
        }
    }
    Matrix ans = a + b;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << ans.c[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
    ans = a - b;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << ans.c[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
    ans = a * b;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << ans.c[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
}
