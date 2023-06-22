#include<bits/stdc++.h>
using namespace std;

class BAIXE;
class PT{
protected:
    char maPT[10], loai[20], hangSX[30];
    int gia;
public:
    void Nhap(){
        cout << "Ma pt: "; fflush(stdin); gets(maPT);
        cout << "Loai: "; fflush(stdin); gets(loai);
        cout << "Gia: "; cin >> gia;
        cout << "Hang sx: "; fflush(stdin); gets(hangSX);
    }
    void Xuat(){
        cout << setw(10) << left << maPT << setw(10) << loai << setw(10) << gia << setw(10) << hangSX;
    }
};
class XEMAY: public PT{
    char maXe[10], tenXe[20], bienSo[10];
    float dungTich;
public:
    void Nhap(){
        PT::Nhap();
        cout << "Ma xe: "; fflush(stdin); gets(maXe);
        cout << "Ten xe: "; fflush(stdin); gets(tenXe);
        cout << "Dung tich: "; cin >> dungTich;
        cout << "Bien so: "; fflush(stdin); gets(bienSo);
    }
    void Xuat(){
        PT::Xuat();
        cout << setw(10) << left << maXe << setw(10) << tenXe << setw(10) << dungTich << setw(10) << bienSo << endl;
    }
    friend class BAIXE;
    friend void sxDungTich(BAIXE &a);
};
class BAIXE{
    char maBX[10], tenBX[20];
    float dt;
    XEMAY *x;
    int n;
public:
    void Nhap(){
        cout << "Ma bx: "; fflush(stdin); gets(maBX);
        cout << "Ten bx: "; fflush(stdin); gets(tenBX);
        cout << "Dien tich: "; cin >> dt;
        cout << "Nhap so luong xe may: "; cin >> n;
        x=new XEMAY[n];
        for(int i=0; i<n; i++){
            cout << "\nNhap tt xe may thu " << i+1 << ":\n";
            x[i].Nhap();
        }
    }
    void Xuat(){
        cout << "Ma bx: " << maBX << endl;
        cout << "Ten bx: " << tenBX << endl;
        cout << "Dien tich: " << dt << endl;
        cout << "\t\t\tTHONG TIN XE MAY\n";
        cout << setw(10) << left << "Ma pt" << setw(10) << "Loai" << setw(10) << "Gia" << setw(10) << "Hang sx"
        << setw(10) << "Ma xe" << setw(10) << "Ten xe" << setw(10) << "Dung tich" << setw(10) << "Bien so" << endl;
        for(int i=0; i<n; i++){
            x[i].Xuat();
        }
    }
    friend void Sua(BAIXE &x){
        strcpy(x.tenBX,"MAI DICH");
    }
    friend void sxDungTich(BAIXE &a){
        for(int i=0; i<a.n-1; i++){
            for(int j=i+1; j<a.n; j++){
                if(a.x[i].dungTich>a.x[j].dungTich){
                    XEMAY tmp=a.x[i];
                    a.x[i]=a.x[j];
                    a.x[j]=tmp;
                }
            }
        }
    }
};
int main(){
    BAIXE a;
    a.Nhap();
    cout << "\n======================\n";
    a.Xuat();
    cout << "\n======================\n";
    Sua(a);
    a.Xuat();
    cout << "\n======================\n";
    sxDungTich(a);
    a.Xuat();
}
