#include <iostream>

int main()
{
    int variable1{100};
    float variable2{}; 
    short variable3{};
    double variable4{};
    long double variable5{};
    long variable6{};
    long long variable7{};
    bool variable8{};

    std::cout<< "int: " << &variable1 << " " << sizeof(variable1)<<std::endl;
    std::cout<< "float: " << &variable2 << " " << sizeof(variable2) << std::endl;
    std::cout<< "short: " << &variable3 << " " << sizeof(variable3) << std::endl;
    std::cout<< "double: " << &variable4 << " " << sizeof(variable4) << std::endl;
    std::cout<< "long double: " << &variable5 << " " << sizeof(variable5) << std::endl;
    std::cout<< "long: " << &variable6 << " " << sizeof(variable6) << std::endl;
    std::cout<< "long long: " << &variable7 << " " << sizeof(variable7) << std::endl;
    std::cout<< "bool: " << &variable8 << " " << sizeof(variable8) << std::endl;

}