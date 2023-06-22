#include<bits/stdc++.h>
using namespace std;

class PTB2{
    float a,b,c;
public:
    friend istream &operator>>(istream &in, PTB2 &y);
    friend ostream &operator<<(ostream &out, PTB2 y);
    PTB2 operator-(PTB2 y);
    float operator--();
};
istream &operator>>(istream &in, PTB2 &y){
    in >> y.a >> y.b >> y.c;
    return in;
}
ostream &operator<<(ostream &out, PTB2 y){
    out << y.a << "*x^2 + " << y.b << "*x + " << y.c << " = 0" << endl;
    return out;
}
PTB2 PTB2::operator-(PTB2 y){
    PTB2 tg;
    tg.a = a - y.a;
    tg.b = b - y.b;
    tg.c = c - y.c;
    return tg;
}
float PTB2::operator--(){
    return (a+b+c)/3;
}
int main(){
    PTB2 P,Q, K;
    cout << "Nhap ptr P: "; cin >> P;
    cout << "Nhap ptr Q: "; cin >> Q;
    K = P - Q;
    cout << "Ptr K = " << K << endl;
    cout << fixed <<setprecision(2) << "TB cua cac he so cua ptr K: " << --K << endl;
}
