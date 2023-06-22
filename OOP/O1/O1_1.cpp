#include<bits/stdc++.h>
using namespace std;

//class PHIEU;
class NCC{
private:
    char maNCC[10], tenNCC[30], diaChi[30];
public:
    void NHAP();
    void XUAT();
};
void NCC::NHAP(){
    cout << "Nhap ma ncc: "; fflush(stdin); gets(maNCC);
    cout << "Nhap ten ncc: "; fflush(stdin); gets(tenNCC);
    cout << "Nhap dia chi: "; fflush(stdin); gets(diaChi);
}
void NCC::XUAT(){
    cout << "Ma NCC: " << left << setw(32) << maNCC << "Ten NCC: " << tenNCC << endl;
    cout << "Dia chi: " << diaChi << endl;
}
class HANG{
private:
    char tenHang[30];
    float donGia;
    int soLuong;
public:
    void NHAP();
    void XUAT();
    friend class PHIEU;
};
void HANG::NHAP(){
    cout << "\tNhap ten hang: "; fflush(stdin); gets(tenHang);
    cout << "\tNhap don gia : "; cin >> donGia;
    cout << "\tNhap so luong: "; cin >> soLuong;
}
void HANG::XUAT(){
    cout << left << setw(20) << tenHang << setw(15) << donGia << setw(15) << soLuong << setw(15) << soLuong*donGia << endl;
}
class PHIEU{
private:
    char maPhieu[10];
    int D,M,Y;
    NCC ncc;
    HANG *x;
    int n;
public:
    void NHAP();
    void XUAT();
};
void PHIEU::NHAP(){
    cout << "Nhap ma phieu: "; fflush(stdin); gets(maPhieu);
    cout << "Nhap date : "; cin >> D;
    cout << "Nhap month: "; cin >> M;
    cout << "Nhap year : "; cin >> Y;
    ncc.NHAP();
    cout << "Nhap so hang: "; cin >> n;
    x = new HANG[n];
    for(int i=0; i<n; i++){
        cout << "\tNhap thong tin hang thu " << i + 1 << endl;
        x[i].NHAP();
    }
}
void PHIEU::XUAT(){
    float s = 0;
    cout << "\n\n\t\t\tPHIEU NHAP HANG" << endl;
    cout << "Ma phieu: " << left << setw(30) << maPhieu << "Ngay lap: ";
    cout << left << D << "/" << M << "/" << Y << endl;
    ncc.XUAT();
    cout << left << setw(20) << "Ten hang" << setw(15) << "Don gia" << setw(15) << "So luong" << setw(15) << "Thanh tien" << endl;
    for(int i=0; i<n; i++){
        s += x[i].soLuong * x[i].donGia;
        x[i].XUAT();
    }
    cout << right << setw(50) << "Cong thanh tien: " << s;
}
int main(){
    PHIEU a;
    a.NHAP();
    a.XUAT();
}
