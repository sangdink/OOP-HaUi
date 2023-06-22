#include<bits/stdc++.h>
using namespace std;

class NSX{
    char tenNSX[30], diaChi[30];
public:
    void Nhap(){
        cout << "Ten NSX: "; fflush(stdin); gets(tenNSX);
        cout << "Dia chi: "; fflush(stdin); gets(diaChi);
    }
    void Xuat(){
        cout << setw(10) << tenNSX << setw(15) << diaChi;
    }
};
class DATE{
    int D, M, Y;
public:
    void Nhap(){
        cout << "Ngay: "; cin >> D;
        cout << "Thang: "; cin >> M;
        cout << "Year: "; cin >> Y;
    }
    void Xuat(){
        cout << left << D << "/" << M << "/" << Y << endl;
    }
};
class HANG{
protected:
    char tenHang[30];
    NSX x;
    int donGia;
public:
    void Nhap(){
        cout << "Ten hang: "; fflush(stdin); gets(tenHang);
        x.Nhap();
        cout << "Don gia: "; cin >> donGia;
    }
    void Xuat(){
        cout << setw(10) << left << tenHang;
        x.Xuat();
        cout << setw(10) << donGia;
    }
    HANG(){
        strcpy(tenHang,"");
        donGia=0;
    }
};
class TIVI : public HANG{
    float kichThuoc;
    DATE NgayNhap;
public:
    void Nhap(){
        HANG::Nhap();
        cout << "Kich thuoc: "; cin >> kichThuoc;
        NgayNhap.Nhap();
    }
    void Xuat(){
        cout << setw(10) << left << "Ten hang" << setw(10) << "Ten NSX" << setw(15) << "Dia chi" << setw(10) << "Don gia" << setw(15) << "Kich thuoc" << setw(15) << "Ngay nhap" << endl;
        HANG::Xuat();
        cout << setw(15) << kichThuoc;
        NgayNhap.Xuat();
    }
    TIVI():HANG(){
        kichThuoc=0;
    }
};
int main(){
    TIVI x;
    x.Nhap();
    cout << "\n==============================\n";
    x.Xuat();
}
