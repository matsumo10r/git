#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        int HP = 0;
    public:
        int get_HP() { return HP; };
        void set_HP(int HP) { this->HP = HP; };
        //コンストラクタは引数を設定できる
        Person(int HP = 0) {
            cout << "コンストラクタ" << endl;
            this->HP = HP;
        }
        ~Person() {
            cout << "デストラクタ" << endl;
        }
};

int main() {
    Person person2(100);
    cout << person2.get_HP() << endl;
}