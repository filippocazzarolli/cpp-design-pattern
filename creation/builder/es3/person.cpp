#include "person.h"
#include "personBuilder.h"

namespace CppDesignPattern::Creation::Builder::Es3 {
    PersonBuilder Person::create() {
        return PersonBuilder{};
    }
}