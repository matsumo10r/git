#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        //コンストラクタは引数を設定できる
        Person() {
            cout << "基底クラスのコンストラクタ" << endl;
        }
        ~Person() {
            cout << "基底クラスのデストラクタ" << endl;
        }
};
class Warrior :public Person {
    public:
        //コンストラクタは引数を設定できる
        Warrior() {
            cout << "派生クラスのコンストラクタ" << endl;
        }
        ~Warrior() {
            cout << "派生クラスのデストラクタ" << endl;
        }
};

int main() {
    Warrior warrior1;
}