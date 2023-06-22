//#include<bits/stdc++.h>
//using namespace std;
//
//class Array{
//    int n;
//    float *a;
//public:
//    friend istream &operator>>(istream &in, Array &y){
//        cout << "Nhap so phan tu cua mang: "; in >> y.n;
//        y.a=new float[y.n];
//        for(int i=0; i<y.n; i++){
//        in >> y.a[i];
//    }
//    return in;
//    }
//    friend ostream &operator<<(ostream &out, Array y){
//        for(int i=0; i<y.n; i++){
//            out << y.a[i] << " ";
//        }
//        return out;
//    }
//    Array operator++(){
//        for(int i=0; i<n-1; i++){
//            for(int j=i+1; j<n; j++){
//                if(a[i]>a[j]){
//                    float tg=a[i];
//                    a[i]=a[j];
//                    a[j]=tg;
//                }
//            }
//        }
//        return *this;
//    }
//};
//
//int main(){
//    int n; cout << "Nhap n mang: "; cin >> n;
//    Array *a = new Array[n];
//    for(int i=0; i<n; i++){
//        cout << "\nNhap mang thu " << i+1 << ": " << endl;
//        cin >> a[i];
//    }
//    for(int i=0; i<n; i++){
//        cout << "Xuat mang thu " << i+1 << ": " << a[i] << endl;
//    }
//
//    for(int i=0; i<n; i++){
//        ++a[i];
//        cout << "\nMang sap xep tang mang thu " << i+1 << ": " << a[i];
//    }
//
//}

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
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[i]>a[j]){
                    float tg=a[i];
                    a[i]=a[j];
                    a[j]=tg;
                }
            }
        }
        return *this;
    }
    float Min(){
        float Minl=1e9;
        for(int i=0; i<n; i++){
            if(a[i]<Minl) Minl=a[i];
        }
        return Minl;
    }
    float operator-(){
        int Minl=1e9;
        for(int i=0; i<n; i++){
            if(a[i]<Minl) Minl=a[i];
        }
        return Minl;
    }
};

int main(){
    Array a;
    cin >> a;
    float b=a.Min(); //can co tro toi
    cout << b;
    cout << -a;
}

