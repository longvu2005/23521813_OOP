#include<bits/stdc++.h>

using namespace std;

struct fac {
    int p, q;
    bool operator < (const fac& z) const {
        return p * z.q < q * z.p;
    }
};

fac tong(fac a, fac b) {
    return {a.p * b.q + b.p * a.q, a.q * b.q};
}

fac hieu(fac a, fac b) {
    return {a.p * b.q - b.p * a.q, a.q * b.q};
}

fac tich(fac a, fac b) {
    return {a.p * b.p, a.q * b.q};
}

fac thuong(fac a, fac b) {
    return {a.p * b.q, a.q * b.p};
}

fac f[201001];
int32_t main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> f[i].p >> f[i].q;
    }
    fac anstong = {0, 1}, ansmx = {0, 1};
    for (int i = 1; i <= n; ++i) {
        anstong = tong(anstong, f[i]);
        ansmx = max(ansmx, f[i]);
    }
    cout << anstong.p << "/" << anstong.q << '\n';
    cout << ansmx.p << "/" << ansmx.q << '\n';
}
