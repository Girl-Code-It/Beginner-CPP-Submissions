#include <iostream>

void main() {
    int a = 0, b = 0, c = 0;
    std::cout<< "Enter three numbers"<< std::endl;
    std::cin>> a >> b >> c;
    if(a > b) {
        if(c > a)
            std::cout<< "The maximum value is: "<< c << std::endl;
        else
            std::cout<< "The maximum value is: "<< a << std::endlb
    } else if(b > c) {
        std::cout<< "The maximum value is: "<< b << std::endl;
    } else {
        std::cout<< "The maximum value is: "<< c << std::endl;
    }

}
