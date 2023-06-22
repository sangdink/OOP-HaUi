#include<bits/stdc++.h>
using namespace std;

class SP{
private:
    float thuc, ao;
public:
    SP();
    SP(float x, float y);
    friend ostream &operator << (ostream &os, SP x);
    SP operator+(SP b);
    SP operator-(SP b);
};
SP::SP(){
    thuc=ao=0;
}
SP::SP(float x, float y){
    thuc=x;
    ao=y;
}
ostream &operator << (ostream &os, SP x){
    os << x.thuc << " + i* " << x.ao;
    return os;
}
SP SP::operator+(SP b){
    SP tg;
    tg.thuc = thuc + b.thuc;
    tg.ao = ao + b.ao;
    return tg;
}
SP SP::operator-(SP b){
    SP tg;
    tg.thuc = thuc - b.thuc;
    tg.ao = ao - b.ao;
    return tg;
}
int main(){
    SP sp1(1,2);
    SP sp2(3,4);
    SP sp3=sp1+sp2;
    SP sp4=sp1-sp2;
    cout << "So phuc thu 1: " << sp1 << endl;
    cout << "So phuc thu 2: " << sp2 << endl;
    cout << "So phuc thu 3: " << sp3 << endl;
    cout << "So phuc thu 4: " << sp4 << endl;

}
