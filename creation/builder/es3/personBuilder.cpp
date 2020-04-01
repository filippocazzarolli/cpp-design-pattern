#include "personBuilder.h"
#include "personAddressBuilder.h"
#include "personJobBuilder.h"

namespace CppDesignPattern::Creation::Builder::Es3 {
    PersonAddressBuilder PersonBuilderBase::lives() const {
        return PersonAddressBuilder{person};
    }

    PersonJobBuilder PersonBuilderBase::works() const {
        return PersonJobBuilder{person};
    }
}
