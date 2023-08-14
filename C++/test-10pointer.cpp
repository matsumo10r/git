#include <iostream>
using namespace std;

void sqrt(int* x, int* y);
void sqrt(int t[]);

int main() {
    int x = 10;
    cout << &x << endl;

    int* xPtr;
    xPtr = &x;
    cout << *xPtr << endl;
    cout << xPtr << endl;

    int y = 10;
    int *yPtr = &y;
    cout << *yPtr << endl;

    sqrt(xPtr ,yPtr);
    cout << *yPtr << endl;

    int s[] = {10,20,30,40,50};
    sqrt(s);
    for (int i=0; i<5; i++) {
        cout << "s[" << i << "]:" << s[i] << endl;
    }
}

void sqrt(int* x, int* y) {
    *y = *x * *x;
}
void sqrt(int t[]) {
    t[0] = 100;
    t[2] = 200;
}