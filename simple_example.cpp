// This is an example file as part of Modern-CMake

#include "simple_lib.hpp"

#include <iostream>

//测试编码
int main() {

    simple_lib_function();
    Myclass* myobj = new Myclass();
    myobj->hello();
    myobj->hello1();
    myobj->hello2();
    myobj->hello3();

    return 0;
}
