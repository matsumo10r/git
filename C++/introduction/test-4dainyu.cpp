#include <iostream>
//#include <string>

int main()
{
    int x = 3;
    x += 3;  // x = x + 3;
    x -= 3;  // x = x - 3;
    x *= 3;  // x = x * 3;
    x /= 3;  // x = x / 3;


    std::cout << x << "\n";
    std::cout << ++x << "\n";
    std::cout << ++x << "\n";
    std::cout << x << "\n";
    std::cout << x++ << "\n";
    std::cout << x++ << "\n";

    const int pi = 3.14159;
    //pi = 3;

}