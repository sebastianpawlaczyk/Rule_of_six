#include <iostream>
#include "TestA.h"
#include <vector>

int main() {

    // Use Copy Constructor
    TestA a(4);
    TestA b(a);
    std::cout<<"-----------------------"<<std::endl;

    // Use Copy Assignment
    TestA c(8);
    c = b;
    std::cout<<"-----------------------"<<std::endl;

    // Use Move Constructor
    TestA d(std::move(b));
    std::cout<<"-----------------------"<<std::endl;

    return 0;
}