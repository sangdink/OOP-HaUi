#include<iostream>
#include<iomanip>
using namespace std;

class PHIEU;
class MON {
private:
    char tenMon[30];
    int soTrinh;
    float diem;
public:
    void Nhap(){
        cout << "Nhap ten mon : "; fflush(stdin); gets(tenMon);
        cout << "Nhap so trinh: "; cin >> soTrinh;
        cout << "Nhap diem    : "; cin >> diem;
    }
    void Xuat(){
        cout << setw(25) << left << tenMon << setw(15) << soTrinh << setw(15) << diem << endl;
    }
    friend class PHIEU;
    //friend void Bonus1(PHIEU a);
    friend void in(PHIEU a);
    friend void chen(PHIEU a);
    friend void sxGiam(PHIEU a);
};
class SINHVIEN{
    char maSV[30];
    char tenSV[30];
    char lop[15];
    int khoa;
public:
    void Nhap(){
        cout << "Nhap MSV : "; fflush(stdin); gets(maSV);
        cout << "Nhap ten : "; fflush(stdin); gets(tenSV);
        cout << "Nhap lop : "; fflush(stdin); gets(lop);
        cout << "Nhap khoa: "; cin >> khoa;
    }
    void Xuat(){
        cout << "MSV: " << setw(20) << maSV << "\tTen sinh vien: " << tenSV << endl;
        cout << "Lop: " << setw(20) << lop <<  "\tKhoa: " << khoa << endl;
    }
};
class PHIEU{
    SINHVIEN x;
    MON *y;
    int n;
public:
    void Nhap(){
        x.Nhap();
        cout << "Nhap so mon: "; cin >> n;
        y=new MON[n];
        for(int i=0; i<n; i++){
            cout << "Nhap mn thu " << i+1 << ": " << endl;
            y[i].Nhap();
        }
    }
    void Xuat(){
        float tong=0;
        cout << "\n\n\t\t\tPHIEU BAO DIEM" << endl;
        x.Xuat();
        cout << "Bang diem: " << endl;
        cout << setw(25) << left << "Ten mon" << setw(15) << "So trinh" << setw(15) << "Diem" << endl;
        for(int i=0; i<n; i++){
            y[i].Xuat();
            tong+=y[i].diem;
        }
        cout << right << setw(40)<< "Diem tb: " << tong/n << endl;
    }
    friend void in(PHIEU a){
        cout << setw(25) << left << "Ten mon" << setw(15) << "So trinh" << setw(15) << "Diem" << endl;
        for(int i=0; i<a.n; i++){
            if(a.y[i].soTrinh>3)
                a.y[i].Xuat();
        }
    }
    friend void chen(PHIEU a){
        int pos;
        cout << "Nhap vtri can chen: "; cin >> pos;
        MON temp;
        temp.Nhap();
        for(int i=a.n; i>=pos; i--){
            a.y[i]=a.y[i-1];
        }
        a.y[pos-1]=temp;
        a.n++;
        a.Xuat();
    }
    friend void sxGiam(PHIEU a){
        for(int i=0; i<a.n-1; i++){
            for(int j=i+1; j<a.n; j++){
                if(a.y[i].diem<a.y[j].diem){
                    MON temp=a.y[i];
                    a.y[i]=a.y[j];
                    a.y[j]=temp;
                }
            }
        }
        a.Xuat();
    }
};
int main(){
    PHIEU x;
    x.Nhap();
    x.Xuat();
    in(x);
    chen(x);
    sxGiam(x);

}

