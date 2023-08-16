#include <iostream>
using namespace std;
//仮想関数（virtual）：virtual変数宣言
class Person {
public:
    virtual void say_hello() { cout << "Hello Person" << endl; }
};
//オーバーライド：派生クラスで同じ関数を宣言できる
class Warrior :public Person {
public:
    void say_hello() { cout << "Hello Warrior" << endl; }
};

int main() {
    Person *personPtr1;
    //ポインタは一つでよい
    //Warrior* warriorPrt1;

    Person person1;
    Warrior warrior1;

    //基底ポインタ、基底オブジェクト（通常）
    personPtr1 = &person1;
    personPtr1->say_hello();
    //基底ポインタ、派生オブジェクト（★派生の結果となる★）
    personPtr1 = &warrior1;
    personPtr1->say_hello();
    //基底ポインタ、派生オブジェクトだと基底も派生どちらも呼べる（名前空間指定）
    personPtr1->Person::say_hello();
    //personPtr1->Warrior::say_hello();



}