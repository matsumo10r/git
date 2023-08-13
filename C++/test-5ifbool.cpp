#include <iostream>
//#include <string>

int main()
{
    bool is_ok = false;
    is_ok = true;

    if(is_ok) {
        std::cout << "is_ok = true" << "\n";
    }

    int x = 30;

    if (x > 100){
        std::cout << "x > 100" << "\n";
    }
    else if (x > 10){
        std::cout << "x > 10" << "\n";
    }
    else {
        if(x == 10) std::cout << "x は 10 です" << "\n";
        std::cout << "x <= 10" << "\n";
    }
    
    int y = 50;

    if (x> 10 && y > 10) {
        std::cout << "x も y も 10 以上" << "\n";
    }




}