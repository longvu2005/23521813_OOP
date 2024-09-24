#include<bits/stdc++.h>

using namespace std;

struct fac {
    int p, q;
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

int32_t main() {
    fac a, b;
    cin >> a.p >> a.q >> b.p >> b.q;
    fac anstong = tong(a, b)
        , anshieu = hieu(a, b)
        , anstich = tich(a, b)
        , ansthuong = thuong(a, b);
    cout << anstong.p << "/" << anstong.q << '\n';
    cout << anshieu.p << "/" << anshieu.q << '\n';
    cout << anstich.p << "/" << anstich.q << '\n';
    cout << ansthuong.p << "/" << ansthuong.q << '\n';
}
