#include <iostream>

using namespace std;

/********** 基本クラス **********/
class kihon {
private:
int data1;

public:
kihon() { data1 = 0; cout << "kihon1 コンストラクタ" << '\n';}
kihon(int d) { data1 = d; cout << "kihon2 コンストラクタ" << '\n';}
void set_data1(int d) { data1 = d; }
void show_data1();

};

void kihon::show_data1() {
      cout << "data1は" << data1 << "です" << '\n';
}

/********** 派生クラス **********/
class hasei : public kihon {      // 基本クラスkihonを継承して
private:                          // 派生クラスhaseiを定義
int data2;

public:
hasei();
hasei(int d1, int d2);
void set_data2(int d1, int d2);
void show_data2();
};
hasei::hasei() {
      cout << "hasei1 コンストラクタ" << '\n';
      data2 = 0;
};
// hasei::hasei() : kihon() {
//       cout << "hasei1 コンストラクタ" << '\n';
//       data2 = 0;
// };
// hasei::hasei() {
//       cout << "hasei1 コンストラクタ" << '\n';
//      kihon();      // 基本クラスのコンストラクタを使用
//      data2 = 0;
// };

hasei::hasei(int d1, int d2) {
      set_data1(d1);      // 基本クラスのメンバ関数を使用
      data2 = d2;
}

void hasei::set_data2(int d1, int d2) {
      set_data1(d1);      // 基本クラスのメンバ関数を使用
      data2 = d2;
}

void hasei::show_data2() {
      show_data1();      // 基本クラスのメンバ関数を使用
      cout << "data2は" << data2 << "です" << '\n';
}

/********** main関数 **********/
int main() {
/***** 基本クラスの動作 *****/
      // kihon a(10);
      // a.show_data1();
/***** 派生クラスの動作 *****/
      hasei b;
      // hasei b(50, 100);
      // b.set_data2(100, 200);
      // b.show_data2();
      // b.set_data1(30);      // 基本クラスのメンバ関数を使用
      // b.show_data1();       // 基本クラスのメンバ関数を使用
}

