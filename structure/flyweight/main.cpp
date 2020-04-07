#include <iostream>
#include "es1.cpp"
#include "es2.cpp"

using namespace std;

namespace CppDesignPattern::Structure::Flyweight {
    namespace {
        void es1() {
            Es1::FormattedText ft("This is a brave new world");
            ft.capitalize(10, 15);
            cout << ft << endl;
        }

        void es2() {
            Es2::BetterFormattedText bft("This is a brave new world");
            bft.get_range(10, 15).capitalize = true;
            cout << bft << endl;
        }
    }

    void main() {
        es1();
        es2();
    }
}
