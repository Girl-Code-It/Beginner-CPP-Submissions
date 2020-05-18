#include <iostream>
int main () {
    int abc = 0;
    std::cout<< "enter a number" << std::endl;
    std::cin>> abc;
    if (abc % 2 == 0) {
        std::cout<< "the number is even" << std::endl;
    } else {
        std::cout<< "the number is odd" << std::endl;
    }
    return 0;

}
