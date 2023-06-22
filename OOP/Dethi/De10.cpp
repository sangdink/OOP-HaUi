#include<bits/stdc++.h>
using namespace std;

class Array{
    int n;
    int *a;
public:
    friend istream &operator>>(istream &in, Array &y);
    friend ostream &operator<<(ostream &out, Array y);
    int Min();
    Array operator++();
};
istream &operator>>(istream &in, Array &y){
    cout << "Nhap n: "; in >> y.n;
    cout << "Nhap mang: ";
    y.a = new int[y.n];
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
int Array::Min(){
    int Min=1e9;
    for(int i=0; i<n; i++){
        if(a[i]<Min)
            Min=a[i];
    }
    return Min;
}
Array Array::operator++(){
    int Min_ele=Min(); //Min() da co tro this
    for(int i=0; i<n; i++){
        a[i]+=Min_ele;
    }
    return *this;
}
int main(){
    Array a;
    cin >> a;
    cout << "Xuat mang: " << a;
    ++a;
    cout << "\nMang sau do: " << a;
}
