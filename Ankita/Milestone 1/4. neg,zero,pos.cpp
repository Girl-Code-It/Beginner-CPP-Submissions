#include <iostream>
int main() {
    int x=0;
    std::cout<< "Enter a number" << std::endl;
    std::cin>> x;
    if (x<0) {
        std::cout<< "The number is negative" << std::endl;
    }
    if (x==0) {
        std::cout<< "The number is zero" << std::endl;
    }
    if (x>0) {
        std::cout<< "The number is positive" << std::endl;

    }
    return 0;
}
