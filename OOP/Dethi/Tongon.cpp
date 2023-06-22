#include<bits/stdc++.h>
using namespace std;

class Array{
    int n;
    float *a;
public:
    friend istream &operator>>(istream &in, Array &y){
        cout << "Nhap so phan tu cua mang: "; in >> y.n;
        y.a=new float[y.n];
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
    Array operator++(){
        Array b;
        b.n=n;
        b.a = new float[n];
        for(int i=0;i<this->n;i++){
            b.a[i] = this->a[i];
        }
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(b.a[i]>b.a[j]){
                    float tg=b.a[i];
                    b.a[i]=b.a[j];
                    b.a[j]=tg;
                }
            }
        }
        return b;
    }
};

int main(){
    int n; cout << "Nhap n mang: "; cin >> n;
    Array *a = new Array[n];
    for(int i=0; i<n; i++){
        cout << "\nNhap mang thu " << i+1 << ": " << endl;
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cout << "Xuat mang thu " << i+1 << ": " << a[i] << endl;
    }

    for(int i=0; i<n; i++){
        //++a[i];
        cout << "\nMang sap xep tang mang thu " << i+1 << ": " << ++a[i];
    }
    for(int i=0; i<n; i++){
        //++a[i];
        cout << "\nMang thu " << i+1 << ": " << a[i];
    }

}
