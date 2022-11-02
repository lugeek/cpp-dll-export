#include "simple_lib.hpp"
#include <string>

std::string simple_lib_function() {
    return "Compiled in library";
}

void Myclass::hello() {
    printf("hello");
}

int Myclass::var2 = 2;

void Myclass::hello1() {
    printf("hello1");
}