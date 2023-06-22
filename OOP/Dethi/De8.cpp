#include<bits/stdc++.h>
using namespace std;

int UCLN(int tu, int mau){
        if(mau==0) return tu;
        return UCLN(mau,tu%mau);
}
class PS{
    int tu, mau;
public:
    PS(){
        tu=0;
        mau=1;
    }
    friend istream &operator>>(istream &in, PS &y){
        in >> y.tu >> y.mau;
        return in;
    }
    friend ostream &operator<<(ostream &out, PS y){
        out << y.tu << "/" << y.mau << endl;
        return out;
    }
    PS operator--(){
        int ucln=UCLN(tu,mau);
        tu=tu/ucln;
        mau=mau/ucln;
        return *this;
    }
};
int main(){
    int n;
    cout << "Nhap n: "; cin >> n;
    PS *a = new PS[n];
    for(int i=0; i<n; i++){
        cout << "Nhap ps thu " << i+1 << ": ";
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cout << "Ps thu " << i+1 << ": " << a[i] << endl;
    }
    for(int i=0; i<n; i++){
        //--a[i];
        cout << "Ps thu " << i+1 << ": " << --a[i] << endl;
    }
    ofstream f("PS.txt",ios::out);
    for(int i=0; i<n; i++){
        f << "Ps thu " << i+1 << ": " << a[i] << endl;
    }
    for(int i=0; i<n; i++){
        //--a[i];
        f << "Ps thu " << i+1 << ": " << --a[i] << endl;
    }
    f.close();
}
