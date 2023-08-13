#include <iostream>
#include <string>

int main()
{
    int x;
    x = 3;

    int y = 5;
    int z;

    z = x + y;

    std::cout << z << "\n";
    std::cout << x -y << "\n";
    std::cout << x * y << "\n";
    std::cout << x / y << "\n";
    std::cout << x % y << "\n";

    double d = 3.14;
    std::cout << d / x << "\n";

    char c = 'a';
    std::string message = "I love";
    std::string message2 = " Japan";
    std::cout << message + message2;


}