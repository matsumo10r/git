#include <iostream>
using namespace std;

//テンプレート
template <class T>
T equation(T a=0, T b=0);

int main() {
    int x = 10;
    int y = 10;
    int z = equation(x,y);
    cout << "int:" << z << endl;

    double xd = 1.5;
    double yd = 0.1;
    double zd = equation(xd,yd);
    cout << "double:" << zd << endl;

}

template <class T>
T equation(T a, T b) {
    return 3 * a + b;
}
