#include<bits/stdc++.h>
using namespace std;


class SINHVIEN{
    char maSV[20];
    char hoTen[30];
    int tuoi;
public:
    friend istream& operator >>(istream& x, SINHVIEN &y);
    friend ostream& operator <<(ostream& x, SINHVIEN y);
};
istream& operator >>(istream& x, SINHVIEN &y)
{
    cout << "Ma sv: "; x.getline(y.maSV,20);//x>>y.maSV; //cin.getline(y.maSV,20);
    cout << "Ho ten: "; x.getline(y.hoTen,30);
    cout << "Tuoi: "; x>>y.tuoi;
    return x;
}
ostream& operator <<(ostream& x, SINHVIEN y){
    x<<setw(20)<<y.maSV<<setw(20)<<y.hoTen<<setw(10)<<y.tuoi<<endl;
    return x;
}
int main(){
    SINHVIEN a;
    cin>>a;
    cout << a;
}
