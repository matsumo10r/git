#include <iostream>
using namespace std;
class Person {
public:
    void say_hello() { cout << "Hello Person" << endl; }
};
//オーバーライド：派生クラスで同じ関数を宣言できる
class Warrior :public Person {
public:
    void say_hello() { cout << "Hello Warrior" << endl; }
};

int main() {
    Person *personPtr1;
    Warrior* warriorPrt1;

    Person person1;
    Warrior warrior1;
    //オーバーライドしたら派生クラスの結果になる
    warrior1.say_hello();

    //基底ポインタ、基底オブジェクト（通常）
    personPtr1 = &person1;
    personPtr1->say_hello();
    //基底ポインタ、派生オブジェクト（★基底の結果となる★）
    personPtr1 = &warrior1;
    personPtr1->say_hello();
    //派生ポインタ、基底オブジェクト（エラーとなる出来ない）
    //warriorPrt1 = &person1;
    //warriorPrt1->say_hello();
    //派生ポインタ、派生オブジェクト（通常）
    warriorPrt1 = &warrior1;
    warriorPrt1->say_hello();



}