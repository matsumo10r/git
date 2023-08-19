#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int main() {
    std::string value = "";
    std::cin >> value;

    if (value.length() == 3)
    {
        try
        {
            if (std::all_of(value.cbegin(), value.cend(), isdigit)) {
                int ivalue = stoi(value);
                int ovalue = ivalue * 2;
                value = std::to_string(ovalue);
                std::cout << value << std::endl;
            } else {
                std::cout << "error" << std::endl;
            };
        }
        catch(const std::exception& e)
        {
            std::cout << "error" << std::endl;
        }
    }
    else
    {
        std::cout << "error" << std::endl;
    };

}