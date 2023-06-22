#include<bits/stdc++.h>
using namespace std;

class THUADAT{
    float CD, CR, giaTien;
public:
    THUADAT(){
        CD=CR=giaTien=0;
    }
    THUADAT(float a, float b, float gt){
        CD=a;
        CR=b;
        giaTien=gt;
    }
    friend istream &operator>>(istream &in, THUADAT &y){
        cout << "Nhap cd: "; in >> y.CD;
        cout << "Nhap cr: "; in >> y.CR;
        cout << "Gia tien: "; in >> y.giaTien;
        return in;
    }
    friend ostream &operator<<(ostream &out, THUADAT &y){
        out << "Chieu dai: " << y.CD;
        out << "\nChieu rong: " << y.CR;
        out << "\nGia tien: " << y.giaTien;
        return out;
    }
    float operator+(){
        return CD*CR;
    }
    int operator==(THUADAT y){
        THUADAT x=*this;
        if(+x == +y && x.giaTien==y.giaTien)
            return true;
        return false;
    }
};
int main(){
    THUADAT a(3,2,3);
    THUADAT b;
    cout << "Nhap thua dat t2: \n";
    cin >> b;
    cout << "Dien tich cua thua dat thu 1: " << +a;
    cout << "\nDien tich cua thua dat thu 2: " << +b;
    cout << "\nHai thua dat co dien tich bang nhau la: ";
    if(a==b) cout << "True\n";
    else cout << "False\n";
}
