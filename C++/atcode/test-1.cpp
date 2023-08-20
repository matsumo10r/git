#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

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
                cout << value << endl;
            } else {
                cout << "error" << endl;
            };
        }
        catch(const std::exception& e)
        {
            cout << "error" << endl;
        }
    }
    else
    {
        cout << "error" << endl;
    };

}