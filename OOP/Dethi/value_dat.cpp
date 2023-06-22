#include<bits/stdc++.h>
using namespace std;

template<typename value>
class Array{
    int n;
    value *a;
public:
    friend istream &operator>>(istream &in, Array &y){
        cout << "Nhap so phan tu cua mang: "; in >> y.n;
        y.a=new value[y.n];
        for(int i=0; i<y.n; i++){
        in >> y.a[i];
    }
    return in;
    }
    friend ostream &operator<<(ostream &out, Array y){
        for(int i=0; i<y.n; i++){
            out << y.a[i] << " ";
        }
        return out;
    }
};
int main(){
    int n; cout << "Nhap n mang: "; cin >> n;
    Array<float> *a = new Array<float>[n];
    for(int i=0; i<n; i++){
        cout << "\nNhap mang thu " << i+1 << ": " << endl;
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cout << "Xuat mang thu " << i+1 << ": " << a[i] << endl;
    }
}
