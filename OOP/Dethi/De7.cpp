#include<bits/stdc++.h>
using namespace std;

class Array{
    int n;
    double *a;
public:
    friend istream &operator>>(istream &in, Array &y);
    friend ostream &operator<<(ostream &out, Array y);
    Array operator--();
};
istream &operator>>(istream &in, Array &y){
    cout << "Nhap n: "; in >> y.n;
    y.a = new double[y.n];
    cout << "Nhap mang: ";
    for(int i=0; i<y.n; i++){
        in >> y.a[i];
    }
    return in;
}
ostream &operator<<(ostream &out, Array y){
    for(int i=0; i<y.n; i++){
        out << y.a[i] << " ";
    }
    return out;
}
Array Array::operator--(){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]<a[j]){
                double tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
    return *this;
}
int main(){
    Array a;
    cin >> a;
    cout << "Cac phan tu cua mang: " << a;
    --a;
    cout << "\nMang sau khi da giam dan: " << a;
}

