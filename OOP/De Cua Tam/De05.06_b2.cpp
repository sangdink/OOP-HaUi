#include<bits/stdc++.h>
using namespace std;

class Array{
    int n;
    int *a;
public:
    friend istream &operator>>(istream &in, Array &y);
    friend ostream &operator<<(ostream &out, Array y);
    Array operator-(){
        Array tg;
        tg.n = n;
        tg.a = new int[tg.n];
        for(int i=0; i<tg.n; i++){
            tg.a[i]=-a[i];
        }
        return tg;
    }
    Array operator++(){
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[i]>a[j]){
                    int tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }
        return *this;
    }
};
istream &operator>>(istream &in, Array &y){
    cout << "Nhap n: "; in >> y.n;
    y.a = new int[y.n];
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

int main(){
    Array a;
    cin >> a;
    cout << endl << "Mang da nhap: " << a << endl;
    cout << "Mang da sx tang dan: " << ++a << endl;
    cout << "Mang da doi dau: " << -a << endl;
}
