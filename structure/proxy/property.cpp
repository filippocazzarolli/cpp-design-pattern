#include <string>
#include <iostream>
#include <vector>

using namespace std;

namespace CppDesignPattern::Structure::Proxy::Property {
    // Proxy per le proprietà
    template<typename T>
    struct Property {
        T value;

        Property(const T initialValue) {
            *this = initialValue;
        }

        operator T() {
            return value;
        }

        T operator=(T newValue) {
            return value = newValue;
        }
    };

    struct Creature {
        Property<int> strength{10};
        Property<int> agility{5};
    };
}