#include <iostream>
using namespace std;

//オーバーロード
int equation(int a, int b);
double equation(double a, double b);

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

int equation(int a, int b) {
    return 2 * a + b;
}
double equation(double a, double b) {
    return 2 * a + b;
}

