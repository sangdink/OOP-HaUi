#include<bits/stdc++.h>
using namespace std;

class BINHCHUA{
    float D, R, C;
public:
    BINHCHUA(){
        D=R=C=0;
    }
    BINHCHUA(float a, float b, float c){
        D=a; R=b; C=c;
    }
    friend istream &operator>>(istream &in, BINHCHUA &y){
        in >> y.D >> y.R >> y.C;
        return in;
    }
    friend ostream &operator<<(ostream &out, BINHCHUA y){
        out << "Dai, rong, cao: " << y.D << " " << y.R << " " << y.C << endl;
        return out;
    }
    bool operator==(BINHCHUA y){
        if((D*R*C)==(y.D*y.R*y.C))
            return true;
        return false;
    }
    bool operator()(){
        return (D==R && R==C);
    }
};
int main(){
    BINHCHUA a(2,3,5);
    BINHCHUA b;
    cout << "Nhap thong tin binh chua thu 2: "; cin >> b;
    cout << "Binh thu 1: " << a << endl;
    cout << "Binh chua 2: " << b << endl;
    if(a==b) cout << "2 binh co the tich bang nhau\n";
    else cout << "2 binh khong co the tich bang nhau\n";
    if(a()==1) cout << "Binh chua thu 1 la hinh lap phuong\n";
    else cout << "Binh chua thu 1 KHONG la hinh lap phuong\n";
    if(b()==1) cout << "Binh chua thu 2 la hinh lap phuong\n";
    else cout << "Binh chua thu 2 KHONG la hinh lap phuong\n";
}
