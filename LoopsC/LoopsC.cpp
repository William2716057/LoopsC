#include <iostream>
#include <string>

int main() {

    for (int i = 0; i < 6; i++) {
        std::string x = "* ";
        x = x + std::string(i, '*');
        std::cout << std::string(10 - x.length() / 2, ' ') << x << std::endl;
    }


    for (int i = 0; i < 6; i++) {
        std::string x = "* ";
        x = x + std::string(6 - i, '*');
        std::cout << std::string(10 - x.length() / 2, ' ') << x << std::endl;
    }


    for (int i = 0; i < 6; i++) {
        std::string x = "* ";
        x = x + std::string(i, '*');
        std::cout << x << std::string(10 - x.length(), ' ') << std::endl;
    }


    for (int i = 0; i < 6; i++) {
        std::string x = "* ";
        x = x + std::string(i, '*');
        std::cout << std::string(10 - x.length(), ' ') << x << std::endl;
    }

    return 0;
}