#include<bits/stdc++.h>
using namespace std;

class SV{
private:
    char maSV[10], tenSV[30], lop[10], khoa[5];
public:
    void Nhap();
    void Xuat();
};
void SV::Nhap(){
    cout << "Nhap ma sv: "; fflush(stdin); gets(maSV);
    cout << "Nhap ten sv: "; fflush(stdin); gets(tenSV);
    cout << "Nhap lop: "; fflush(stdin); gets(lop);
    cout << "Nhap khoa: "; fflush(stdin); gets(khoa);
}
void SV::Xuat(){
    cout << "Ma sinh vien: " << left << setw(21) << maSV << "Ten sinh vien: " << tenSV << endl;
    cout << "Lop: " << left << setw(30) << lop << "Khoa: " << khoa;
}
class BANGDIEM{
private:
    char tenMon[30];
    int soTrinh, diem;
public:
    void Nhap();
    void Xuat();
    friend class PHIEU;
};
void BANGDIEM::Nhap(){
    cout << "\tNhap ten mon: "; fflush(stdin); gets(tenMon);
    cout << "\tNhap so trinh: "; cin >> soTrinh;
    cout << "\tNhap diem: "; cin >> diem;
}
void BANGDIEM::Xuat(){
    cout << left << setw(10) << tenMon << setw(30) << soTrinh << setw(15) << diem << endl;
}
class PHIEU{
private:
    SV sv;
    BANGDIEM *x;
    int n;
public:
    void Nhap();
    void Xuat();
};
void PHIEU::Nhap(){
    sv.Nhap();
    cout << "Nhap so mon: "; cin >> n;
    x = new BANGDIEM[n];
    for(int i=0; i<n; i++){
        cout << "Nhap mon thu " << i+1 << ":" << endl;
        x[i].Nhap();
    }
}
void PHIEU::Xuat(){
    cout << "\n\n\t\t\tPHIEU BAO DIEM\n";
    sv.Xuat();
    cout << "\nBang diem:\n";
    cout << setw(10) << "Ten mon" << setw(30) << "So trinh" << setw(15) << "Diem\n";
    for(int i=0; i<n; i++){
        x[i].Xuat();
    }
}
int main(){
    PHIEU a;
    a.Nhap();
    a.Xuat();
}
