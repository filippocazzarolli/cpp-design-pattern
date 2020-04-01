#include <iostream>
#include "method/point.cpp"
#include "friend-class/point.cpp"
#include "inner-class/point.cpp"
#include "abstract/drinkFactory.hpp"

namespace CppDesignPattern::Creation::Factory {

    namespace {
        void method() {
            auto p = Method::Point::NewPolar(5, 3.14);
            std::cout << p << std::endl;
        }

        void friendClass() {
            auto p = FriendClass::PointFactory::NewPolar(5, 3.14);
            std::cout << p << std::endl;
        }

        void innerClass() {
            auto p = InnerClass::Point::Factory.NewPolar(5, 3.14);
            std::cout << p << std::endl;
        }

        void abstract() {
            Abstract::DrinkFactory df;
            df.make_drink("coffee");
        }
    }

    void main() {
        method();

        friendClass();

        innerClass();

        abstract();
    }
}
