#include<bits/stdc++.h>
using namespace std;


class PS{
    float TS, MS;
public:
    void Nhap();
    void Xuat();
    PS operator+(PS Q);
    PS operator-();
    float operator++();
};
void PS::Nhap(){
    cin >> TS >> MS;
}
void PS::Xuat(){
    cout << TS << "/" << MS;
}
PS PS::operator+(PS Q){
    PS K;
    K.TS = TS*Q.MS + MS*Q.TS;
    K.MS = MS*Q.MS;
    return K;
}
PS PS::operator-(){
    PS K;
    K.TS = - TS;
    K.MS = MS;
    return K;
}
float PS::operator++(){
    return TS/MS;
}
int main(){
    PS P,Q;
    P.Nhap();
    Q.Nhap();
    PS K = P+Q;
    K.Xuat(); cout << endl;
    K = -K;
    K.Xuat(); cout << endl;
    cout << "Goa tri cau K = " << ++K;
}
