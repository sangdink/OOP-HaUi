#include<bits/stdc++.h>
using namespace std;

class LH;
class NGUOI{
protected:
    char hoTen[20], ngaySinh[10], queQuan[20];
public:
    void Nhap(){
        cout << "\tHo ten: "; fflush(stdin); gets(hoTen);
        cout << "\tNgay sinh: "; fflush(stdin); gets(ngaySinh);
        cout << "\tQue quan: "; fflush(stdin); gets(queQuan);
    }
    void Xuat(){
        cout << setw(15) << hoTen << setw(10) << ngaySinh << setw(15) << queQuan;
    }
};
class SV : public NGUOI{
private:
    char maSV[10], nganh[10];
    int khoaHoc;
public:
    void Nhap(){
        NGUOI::Nhap();
        cout << "\tMa sv: "; fflush(stdin); gets(maSV);
        cout << "\tNganh: "; fflush(stdin); gets(nganh);
        cout << "\tKhoa hoc: "; cin >> khoaHoc;
    }
    void Xuat(){
        NGUOI::Xuat();
        cout << setw(10) << maSV << setw(10) << nganh << setw(10) << khoaHoc << endl;
    }
    friend class LH;
    friend int SLSVK11(LH &a);
};
class LH{
private:
    char maLH[10], tenLH[20], ngayMo[10];
    SV *x;
    int n;
    char giaoVien[20];
public:
    void Nhap(){
        cout << "Ma LH: "; fflush(stdin); gets(maLH);
        cout << "Ten LH: "; fflush(stdin); gets(tenLH);
        cout << "Ngay mo: "; fflush(stdin); gets(ngayMo);
        cout << "Nhap so sv: "; cin >> n;
        x = new SV[n];
        for(int i=0; i<n; i++){
            cout << "Nhap sv thu " << i+1 << ":\n";
            x[i].Nhap();
        }
        cout << "Giao vien: "; fflush(stdin); gets(giaoVien);
    }
    void Xuat(){
        cout << "Ma LH: " << maLH;
        cout << "\nTen LH: " << tenLH;
        cout << "\nNgay mo: " << ngayMo;
        cout << "\nGiao vien: " << giaoVien;
        cout << "\nDanh sach sv: \n";
        cout << setw(5) << "STT" << setw(15) << "Ho ten" << setw(10) << "Ngay sinh" << setw(15) << "Que quan";
        cout << setw(10) << "Ma sv" << setw(10) << "Nganh" << setw(10) << "Khoa hoc" << endl;
        for(int i=0; i<n; i++){
            cout << setw(5) << i+1;
            x[i].Xuat();
        }
    }
    friend int SLSVK11(LH &a);
};
int SLSVK11(LH &a){
    int cnt=0;
    for(int i=0; i<a.n; i++){
        if(a.x[i].khoaHoc==11){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    LH a;
    a.Nhap();
    cout << "\n===================\n";
    a.Xuat();
    cout << "SL: " << SLSVK11(a);
}
