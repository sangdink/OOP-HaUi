#include<bits/stdc++.h>
using namespace std;

class TTB2{
private:
    float a,b,c;
public:
    TTB2();
    TTB2(float x, float y, float z);
    friend ostream &operator << (ostream &os, TTB2 x);
    TTB2 operator--();
};
TTB2::TTB2(){
    a=b=c=0;
}
TTB2::TTB2(float x, float y, float z){
   a=x, b=y, c=z;
}
TTB2 TTB2::operator--(){
    TTB2 tg;
    tg.a=-a;
    tg.b=-b;
    tg.c=-c;
    return tg;
}
ostream &operator << (ostream &os, TTB2 x){
    os << x.a << "*x^2 + " << x.b << "*x + " << x.c << endl;
}
int main(){
    TTB2 X(1,2,3);
    TTB2 Y(3,4,5);
    cout << "Tam thuc T1 sau khi doi dau: " << --X << endl;
    cout << "Tam thuc T2 sau khi doi dau: " << --Y << endl;
}
