#include <iostream>
#include "person.cpp"
#include "console-person-observer.cpp"

using namespace std;

namespace CppDesignPattern::Behavior::Observer {
    namespace {
        void persona() {
            ConsolePersonObserver cpo;
            Person p;
            p.subscribe(cpo);

            p.set_age(15);
            p.set_age(16);
        }

    }

    void main() {
        persona();


    }
}