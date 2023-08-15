#include <iostream>
using namespace std;

class Person {
//メンバ変数＝クラス内変数（基本private）
private:
    int HP = 0;
    int MP = 0;
//メソッド＝メンバ関数（基本public）
public:
    int get_HP() { return HP; };
    void set_HP(int hp) { HP = hp; };

    int get_MP() { return MP; };
    void set_MP(int mp) { MP = mp; };
};

int main() {
    //オブジェクト生成
    Person person1;
    //セッターによって、クラス内の値をセット
    person1.set_HP(100);
    person1.set_MP(50);
    //ゲッターによって、クラス内の値を取得
    cout << person1.get_HP() << endl;
    cout << person1.get_MP() << endl;
}