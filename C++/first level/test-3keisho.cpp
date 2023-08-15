#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    int HP = 0;
public:
    int get_HP() { return HP; };
    void set_HP(int hp) { HP = hp; };

    void say_hello(string message);
    int sqrt(int x);
};
void Person::say_hello(string message) {
    cout << "Hello, " << message << endl;
}
int Person::sqrt(int x) {
    return x * x;
}

int main() {
    Person person1;
    person1.say_hello("Ryouichi");
    cout << person1.sqrt(5) << endl;
}