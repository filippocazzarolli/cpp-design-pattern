#include <iostream>
#include "singletonClass.cpp"

namespace CppDesignPattern::Creation::Singleton {
    void main() {
        SingletonClass *s = SingletonClass::getInstance();
        SingletonClass *r = SingletonClass::getInstance();

        std::cout << s << std::endl;
        std::cout << r << std::endl;
    }
}