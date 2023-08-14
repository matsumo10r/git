#include <iostream>

using namespace std;

//プロトタイプ宣言（コンパイラに関数の存在を伝える、メイン関数の後に実際の定義が出来る）
void say_hello();
void say_hello2(int a);
int sqrt(int a);

int main() {
    say_hello();
    say_hello2(1);
    say_hello2(2);

    int x = 10;

    int y = x * x;
    int y2 = sqrt(x);

    cout << "y = " << y << endl;
    cout << "y2 = " << y2 << endl;
}

void say_hello() {
    cout << "Hello World" << endl;
}
void say_hello2(int a) {
    cout << "Hello World" << a << endl;
}
int sqrt(int a) {
    return a * a;
}