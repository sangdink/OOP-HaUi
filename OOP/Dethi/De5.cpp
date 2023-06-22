#include<bits/stdc++.h>
using namespace std;

class Complex{
    float a,b;
public:
    Complex(){
        a=b=0;
    }
    Complex(float x, float y){
        a=x;
        b=y;
    }
    friend istream &operator>>(istream &in, Complex &y);
    friend ostream &operator<<(ostream &out, Complex y);
    Complex operator+(Complex y){
        Complex tg;
        tg.a=a+y.a;
        tg.b=b+y.b;
        return tg;
    }
};
istream &operator>>(istream &in, Complex &y){
    in >> y.a >> y.b;
    return in;
}
ostream &operator<<(ostream &out, Complex y){
    out << y.a << " + " << y.b << "i";
    return out;
}
int main(){
    int n;
    cout << "Nhap n so phuc: "; cin >> n;
    Complex *a = new Complex[n];
    for(int i=0; i<n; i++){
        cout << "Nhap so phuc thu " << i+1 << ": ";
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cout << "So phuc thu " << i+1 << ": " << a[i] << endl;
    }
    Complex tong;
    for(int i=0; i<n; i++){
        tong=tong+a[i];
    }
    cout << "Tong cac so phuc: " << tong;
}
