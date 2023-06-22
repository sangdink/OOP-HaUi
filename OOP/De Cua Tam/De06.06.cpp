#include<bits/stdc++.h>
using namespace std;

class PHIEU;
class NV{
    char maNV[10], hoTen[30], maCa[10];
public:
    void Nhap(){
        cout << "Ma nhan vien: "; fflush(stdin); gets(maNV);
        cout << "Ho va ten: "; fflush(stdin); gets(hoTen);
        cout << "Ma ca: "; fflush(stdin); gets(maCa);
    }
    void Xuat(){
        cout << "Ma Nhan vien: " << maNV << "."
        << setw(30) << "Ho va ten: " << hoTen << "." << setw(10) << "Ma ca: " << maCa << "." << endl;
    }
};
class KHO{
    char maKho[10], diaChi[30];
public:
    void Nhap(){
        cout << "Ma kho: "; fflush(stdin); gets(maKho);
        cout << "Dia chi kho: "; fflush(stdin); gets(diaChi);
    }
    void Xuat(){
        cout << "Ma kho: " << maKho << "." << setw(30) << "Dia chi kho: " << diaChi << "." << endl;
    }
};
class TB{
    char maTB[10], tenTB[30];
    int soLuong, donGia;
public:
    void Nhap(){
        cout << "\tMa TB: "; fflush(stdin); gets(maTB);
        cout << "\tTen TB: "; fflush(stdin); gets(tenTB);
        cout << "\tSo luong: "; cin >> soLuong;
        cout << "\tDon gia: "; cin >> donGia;
    }
    void Xuat(){
        cout << setw(10) << left << maTB << setw(15) << tenTB << setw(10) << soLuong << setw(10) << donGia << setw(10) << soLuong*donGia << endl;
    }
    friend class PHIEU;
    friend void sxTangDG(PHIEU &a);
};
class PHIEU{
    char maPhieu[10];
    int D, M, Y;
    NV nv;
    KHO k;
    TB *x;
    int n;
public:
    void Nhap(){
        cout << "Ma phieu: "; fflush(stdin); gets(maPhieu);
        cout << "Ngay lap: "; cin >> D;
        cout << "Thang lap: "; cin >> M;
        cout << "Nam lap: "; cin >> Y;
        nv.Nhap();
        k.Nhap();
        cout << "Nhap so TB: "; cin >> n;
        x=new TB[n];
        for(int i=0; i<n; i++){
            cout << "Nhap TB thu " << i+1 << ":\n";
            x[i].Nhap();
        }
    }
    void Xuat(){
        cout << "DIEN MAY ABC\n";
        cout << "\t\t\tPHIEU NHAP KHO\n";
        cout <<  "Ma phieu: " << maPhieu << "." << setw(30) << "Ngay lap: " << D << "/" << M << "/" << Y << endl;
        nv.Xuat();
        k.Xuat();
        int cnt=0, tongT=0;
        cout << setw(10) << left << "Ma TB" << setw(15) << "Ten thiet bi" << setw(10) << "So luong" << setw(10) << "Don gia" <<setw(10) << "Thanh tien" << endl;
        for(int i=0; i<n; i++){
            x[i].Xuat();
            cnt+=x[i].soLuong;
            tongT+=x[i].soLuong*x[i].donGia;
        }
        cout << "Tong so:" << setw(35) << left << cnt << setw(30) << tongT << endl;
    }
    friend void Sua(PHIEU &x){
        x.D = 22;
        x.M = 12;
        x.Y = 2021;
    }
    friend void sxTangDG(PHIEU &a){
        for(int i=0; i<a.n-1; i++){
            for(int j=i+1; j<a.n; j++){
                if(a.x[i].donGia>a.x[j].donGia){
                    TB tmp=a.x[i];
                    a.x[i]=a.x[j];
                    a.x[j]=tmp;
                }
            }
        }
    }
};
int main(){
    PHIEU a;
    a.Nhap();
    cout << "\n========================\n";
    a.Xuat();
    cout << "\n========================\n";
    Sua(a);
    a.Xuat();
    cout << "\n========================\n";
    sxTangDG(a);
    a.Xuat();
}
