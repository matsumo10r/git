#include <iostream>
using namespace std;

struct Strc {
    int HP = 0;
    int MP = 0;
    int attack = 0;
};

int main() {
    Strc person1;

    person1 = { 100, 50, 10 };
    person1.MP = 100;

    cout << person1.HP << endl;
    cout << person1.MP << endl;
    cout << person1.attack << endl;
}