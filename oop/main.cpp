#include <iostream>
#include "car.hpp"

int main(int argc, char const *argv[])
{
    // Static allocation for Car class
    Car car1 ("gol","black",1997);
    int year = car1.get_year();
    std::cout << year << std::endl;

    std::string model = car1.get_model();
    std::cout << model << std::endl;

    // Dinamic allocation for Car class
    Car * car2 = new Car("voyage","white",1996);
    year = car2->get_year();
    std::cout << year << std::endl;

    // Deallocating memory
    delete car2;
    return 0;
}
