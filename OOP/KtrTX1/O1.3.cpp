#include<bits/stdc++.h>
using namespace std;

class PHIEU;
class NV{
    char tenNV[30], chucVu[30];
public:
    void Nhap(){
        cout << "Nhan vien kiem ke: "; fflush(stdin); gets(tenNV);
        cout << "Chuc vu: "; fflush(stdin); gets(chucVu);
    }
    void Xuat(){
        cout << "Nhan vien kiem ke: " << tenNV << setw(30) << right << "Chuc vu:      " << chucVu << endl;
    }
};
class PHONG{
    char tenP[30], maP[10], truongP[30];
public:
    void Nhap(){
        cout << "Kiem ke tai phong: "; fflush(stdin); gets(tenP);
        cout << "Ma phong: ";fflush(stdin); gets(maP);
        cout << "Truong phong: "; fflush(stdin); gets(truongP);
    }
    void Xuat(){
        cout << "Kiem ke tai phong: " << tenP << setw(30) << right << "Ma phong:     " << maP << endl;
        cout << "Truong phong: " << truongP << endl;
    }
};
class TS{
    char tenTS[30], tinhTrang[30];
    int soLuong;
public:
    void Nhap(){
        cout << "\tTen tai san: "; fflush(stdin); gets(tenTS);
        cout << "\tSo Luong: "; cin >> soLuong;
        cout << "\tTinh trang: "; fflush(stdin); gets(tinhTrang);
    }
    void Xuat(){
        cout << left << setw(25) << tenTS << setw(25) << soLuong << setw(25) << tinhTrang << endl;
    }
    friend class PHIEU;
    friend void Sua(PHIEU a);
    friend void SapXep(PHIEU a);
};

class PHIEU{
    char maP[10];
    int D, M, Y;
    NV x;
    PHONG y;
    TS *z;
    int n;
public:
    void Nhap(){
        cout << "Ma phieu: "; fflush(stdin); gets(maP);
        cout << "Ngay kk: "; cin >> D;
        cout << "Thang kk: "; cin >> M;
        cout << "Nam kk: "; cin >> Y;
        x.Nhap();
        y.Nhap();
        cout << "Nhap so luong tai san: "; cin >> n;
        z = new TS[n];
        for(int i=0; i<n; i++){
            cout << "Nhap ts thu " << i+1 << ": \n";
            z[i].Nhap();
        }
    }
    void Xuat(){
        cout << "\t\t\tPHIEU KIEM KE TAI SAN\n\n";
        cout << "Ma phieu:          "  << maP << setw(30) << "Ngay kiem ke: " << D << "/" << M << "/" << Y << endl;
        x.Xuat();
        y.Xuat();
        cout << left << setw(25) << "Ten tai san" << setw(25) << "So luong" << setw(25) << "Tinh trang" << endl;
        int cnt=0;
        for(int i=0; i<n; i++){
            z[i].Xuat();
            cnt+=z[i].soLuong;
        }
        cout << "Tong tai san da kiem ke: " << n << "\tTong so luong: " << cnt << endl;
    }
    friend void Sua(PHIEU a);
    friend void SapXep(PHIEU a);
};
void Sua(PHIEU a){
    for(int i=0; i<a.n; i++){
        if(strcmp(a.z[i].tenTS,"May vi tinh")==0){
            a.z[i].soLuong=20;
        }
    }
}
void SapXep(PHIEU a){
    for(int i=0; i<a.n-1; i++){
        for(int j=i+1; j<a.n; j++){
            if(a.z[i].soLuong>a.z[j].soLuong){
                TS temp=a.z[i];
                a.z[i]=a.z[j];
                a.z[j]=temp;
            }
        }
    }
}
int main(){
    PHIEU a;
    a.Nhap();
    cout << "\n========================\n";
    a.Xuat();
    cout << "\n===========Sua=============\n";
    Sua(a);
    a.Xuat();
    cout << "\n===========Sap=Xep=============\n";
    SapXep(a);
    a.Xuat();
}
