#include<bits/stdc++.h>
using namespace std;

class MAYIN;
class NSX{
    char tenNSX[30], diaChi[30];
public:
    void Nhap(){
        cout << "Ten nsx: "; fflush(stdin); gets(tenNSX);
        cout << "Dia chi: "; fflush(stdin); gets(diaChi);
    }
    void Xuat(){
        cout << left << setw(15) << tenNSX << setw(15) << diaChi;
    }
    friend void MayInNSX_HP(MAYIN *a, int n);
    friend void Chen(MAYIN *a, int &n, MAYIN x, int k);
};
class MAY{
protected:
    char nhanHieu[30];
    NSX x;
    float giaThanh;
public:
    void Nhap(){
        cout << "Nhan hieu: "; fflush(stdin); gets(nhanHieu);
        x.Nhap();
        cout << "Gia thanh: "; cin >> giaThanh;
    }
    void Xuat(){
        cout << setw(15) << left << nhanHieu;
        x.Xuat();
        cout << setw(10) << left << giaThanh;
    }
    friend void MayInNhanHieu_MF242e(MAYIN *a, int n);
};
class MAYIN: public MAY{
    int tocDo, doPhanGiai;
public:
    void Nhap(){
        MAY::Nhap();
        cout << "Toc do: "; cin >> tocDo;
        cout << "Do phan giai: "; cin >> doPhanGiai;
    }
    void Xuat(){
        MAY::Xuat();
        cout << left << setw(10) << tocDo << setw(10) << doPhanGiai << endl;
    }
    friend void MayInNhanHieu_MF242e(MAYIN *a, int n);
    friend void MayInNSX_HP(MAYIN *a, int n);
    friend void Chen(MAYIN *a, int &n, MAYIN x, int k);
};
void MayInNhanHieu_MF242e(MAYIN *a, int n){
    cout << left << setw(15) << "Nhan hieu" << setw(15) << "Ten NSX"
        << setw(15) << "Dia chi" << setw(10) << "Gia thanh" << setw(10)
        << "Toc do" << setw(10) << "Do phan giai" << endl;
    int cnt=0;
    for(int i=0; i<n; i++){
        if(strcmp(a[i].nhanHieu,"MF242e")==0){
            cnt++;
            a[i].Xuat();
        }
    }
    if(cnt==0) cout << "Khong co:<";
}
void MayInNSX_HP(MAYIN *a, int n){
    cout << left << setw(15) << "Nhan hieu" << setw(15) << "Ten NSX"
        << setw(15) << "Dia chi" << setw(10) << "Gia thanh" << setw(10)
        << "Toc do" << setw(10) << "Do phan giai" << endl;
    int cnt=0;
    for(int i=0; i<n; i++){
        if(strcmp(a[i].x.tenNSX,"HP")==0){
            cnt++;
            a[i].Xuat();
        }
    }
    if(cnt==0) cout << "Khong co:<";
}
void Chen(MAYIN *a, int &n, MAYIN x, int k){
    n++;
    for(int i=n-1; i>=k; i--){
        a[i]=a[i-1];
    }
    a[k-1]=x;
    cout << left << setw(15) << "Nhan hieu" << setw(15) << "Ten NSX"
        << setw(15) << "Dia chi" << setw(10) << "Gia thanh" << setw(10)
        << "Toc do" << setw(10) << "Do phan giai" << endl;
    for(int i=0; i<n; i++)
        a[i].Xuat();
}
int main(){
    int n; cout << "Nhap n: "; cin >> n;
    MAYIN *a = new MAYIN[n];
    for(int i=0; i<n; i++){
        cout << "\nNhap tt may in thu " << i+1 << ":\n";
        a[i].Nhap();
    }
    cout << "\n==========================\n";
    cout << "\t\t\tDanh sach may in:\n";
    cout << left << setw(15) << "Nhan hieu" << setw(15) << "Ten NSX"
        << setw(15) << "Dia chi" << setw(10) << "Gia thanh" << setw(10)
        << "Toc do" << setw(10) << "Do phan giai" << endl;
    for(int i=0; i<n; i++)
        a[i].Xuat();
    cout << "\n==========================\n";
    cout << "Danh sach may in co nhan hieu MF242e:\n";
    MayInNhanHieu_MF242e(a,n);
    cout << "\n==========================\n";
    cout << "Danh sach may in co ten nsx HP:\n";
    MayInNSX_HP(a,n);
    cout << "\n==========================\n";
    MAYIN x;
    x.Nhap();
    int k; cout << "Nhap k: "; cin >> k;
    //Chen(a,n,x,k);
    n++;
    for(int i=n-1; i>=k; i--){
        a[i]=a[i-1];
    }
    a[k-1]=x;
    cout << left << setw(15) << "Nhan hieu" << setw(15) << "Ten NSX"
        << setw(15) << "Dia chi" << setw(10) << "Gia thanh" << setw(10)
        << "Toc do" << setw(10) << "Do phan giai" << endl;
    for(int i=0; i<n; i++)
        a[i].Xuat();
    cout << "\n==========================\n";

}
