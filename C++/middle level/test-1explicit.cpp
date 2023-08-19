#include <iostream>
using namespace std;
class A {
public:
    explicit A(int);
    int value;
    int get_value() const;
};

A::A(int x):value(x){};
//この行は、クラスAのコンストラクタを定義しています。コンストラクタは、オブジェクトが生成されたときに自動的に呼び出される関数で、オブジェクトの初期化を行います。
//このコンストラクタは、引数xを受け取り、メンバ変数valueにxを代入するものです。

int A::get_value() const {
    return value;
};

int main() {
    A a(11);
    //A a = 12;
    cout << a.get_value() << endl;
}