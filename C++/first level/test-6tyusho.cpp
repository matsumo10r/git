#include <iostream>
using namespace std;
class Person {
    public:
        virtual void say_hello() = 0;
};
class Warrior :public Person {
    public:
        void say_hello() { cout << "Hello Warrior" << endl; };
};

int main() {
    //Person person1;
    Warrior warrior1;

    warrior1.say_hello();
}
