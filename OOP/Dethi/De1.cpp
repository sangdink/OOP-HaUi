#include<bits/stdc++.h>
using namespace std;

class DIEM{
    float x,y,z;
public:
    DIEM(){
        x=y=z=0;
    }
    DIEM(float a, float b, float c){
        x=a;
        y=b;
        z=c;
    }
    DIEM operator+(DIEM b){
        DIEM tg;
        tg.x=x+b.x;
        tg.y=y+b.y;
        tg.z=z+b.z;
        return tg;
    }
    friend istream &operator>>(istream &in, DIEM &b);
    friend ostream &operator<<(ostream &out, DIEM b);
};
istream &operator>>(istream &in, DIEM &b){
    in>>b.x>>b.y>>b.z;
    return in;
}
ostream &operator<<(ostream &out, DIEM b){
    out << "(" << b.x << "," << b.y << "," << b.z << ")" << endl;
    return out;
}
int main(){
    DIEM M, N, MN;
    cout << "Nhap toa do diem M: ";
    cin >> M;
    cout << "Nhap toa do diem N: ";
    cin >> N;
    MN=M+N;
    cout << "Tong 2 diem: " << MN << endl;
}
