#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    int HP = 0;
public:
    int get_HP() { return HP; };
    void set_HP(int hp) { this->HP = hp; };
};
class Warrior :public Person {
private:
    int attack = 0;
public:
    int get_attack() { return attack; };
    void set_attack(int attack) { this->attack = attack; };
};

int main() {
    Warrior warrior1;
    warrior1.set_HP(100);
    warrior1.set_attack(10);
    cout << "get_HP:" << warrior1.get_HP() << endl;
    cout << "get_attack:" << warrior1.get_attack() << endl;
}