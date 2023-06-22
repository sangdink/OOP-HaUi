#include<bits/stdc++.h>
using namespace std;

class Vector{
    int n;
    float *a;
public:
//    Vector(){
//        for(int i=0; i<n; i++){
//            a[i]=0;
//        }
//    }
    friend istream &operator>>(istream &in, Vector &y);
    friend ostream &operator<<(ostream &out, Vector y);
    float operator+();
    float operator-();
};
istream &operator>>(istream &in, Vector &y){
    cout << "Nhap n: "; in >> y.n;
    y.a = new float[y.n];
    cout << "Nhap cac phan tu cua vector: ";
    for(int i=0; i<y.n; i++){
        in >> y.a[i];
    }
    return in;
}
float Vector::operator-(){
    float Min=1e9;
    for(int i=0; i<n; i++){
        if(a[i]<Min){
            Min=a[i];
        }
    }
    return Min;
}
float Vector::operator+(){
    float Max=-1e9;
    for(int i=0; i<n; i++){
        if(a[i]>Max){
            Max=a[i];
        }
    }
    return Max;
}
ostream &operator<<(ostream &out, Vector y){
    cout << "Cac phan tu cua vector la: ";
    for(int i=0; i<y.n; i++){
        out << y.a[i] << " ";
    }
    return out;
}
int main(){
    Vector a;
    cin >> a;
    cout << a << endl;
    cout << "Gia tri nho nhat: " << -a << endl;
    cout << "Gia tri lon nhat: " << +a << endl;
}

