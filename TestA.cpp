#include "TestA.h"
#include <iostream>

TestA::TestA():value(nullptr){}

TestA::TestA(int x) {

    value = new int(x);
    std::cout<<"Constructor with value = "<<*value<<" Address =  "<<value<<std::endl;
}

TestA::~TestA() {

    if(value != nullptr) {
        std::cout<<"Destructor of object with value = " << *value << " Address = " << value << std::endl;
        delete value;
    }
    else std::cout<<"Destructor"<<std::endl;
}

TestA::TestA(const TestA &original) {

    value = new int(*original.value);
    std::cout<<"Copy Constructor with value = "<<*value<<" Address = "<<value<<std::endl;
}

TestA& TestA::operator=(const TestA &original) {

    if(this != &original)
        *value = *original.value;
    std::cout<<"Copy Assignment with value = "<<*value<<" Address = "<<value<<std::endl;
    return *this;
}

TestA::TestA(TestA &&original):value(nullptr) {

    std::cout<<"Move Constructor"<<std::endl;
    value = original.value;
    original.value = nullptr;
}
