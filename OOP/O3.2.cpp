#include<bits/stdc++.h>
using namespace std;

class HTG{
private:
    float a, b, c;
public:
    float operator++();
    friend istream &operator >> (istream &is, HTG &x);
    friend ostream &operator << (ostream &os, HTG x);
    friend void writeToFile(char *fileName, HTG x);
};
float HTG::operator++(){
    return this->a+this->b+this->c;
}
istream &operator >> (istream &is, HTG &x){
    cout << "Nhap 3 canh cua tam giac: "; cin >> x.a >> x.b >> x.c;
    return is;
}
ostream &operator << (ostream &os, HTG x){
    os << "Ba canh cua tam giac: " << x.a << " " << x.b << " " << x.c << endl;
    os << "Chu vi: " << ++x;
    return os;
}
void writeToFile(char *fileName, HTG x){
    ofstream f(fileName, ios::app);
    f << x << endl;
    f.close();
}
int main(){
    HTG t;
    cin >> t;
    writeToFile("D:/MANG.txt",t);
    cout << t << endl;
}
