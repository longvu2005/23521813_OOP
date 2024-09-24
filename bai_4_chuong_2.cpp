#include<bits/stdc++.h>

using namespace std;

struct sinhvien {
    string mahs, hten, gioitinh;
    int diemtoan, diemly, diemhoa;
};

int32_t main() {
    sinhvien a;
    cout << "Nhap thong tin hoc sinh: " << '\n';
    cout << "Ma hoc sinh: ";
    cin >> a.mahs;
    cout << "Ho va ten: ";
    cin >> a.hten;
    cout << "Gioi tinh: ";
    cin >> a.gioitinh;
    cout << "Diem toan: ";
    cin >> a.diemtoan;
    cout << "Diem ly: ";
    cin >> a.diemly;
    cout << "Diem hoa: ";
    cin >> a.diemhoa;
    cout << "Ma hoc sinh: " << a.mahs << ", ho va ten: " << a.hten << ", gioi tinh: "
    << a.gioitinh <<  ", diemtoan: " << a.diemtoan << ", diemly: " << a.diemly
    << ", diemhoa: " << a.diemhoa << ", diem trung binh: " << 1.0 * (a.diemtoan + a.diemly + a.diemhoa) / 3 << '\n';
}
