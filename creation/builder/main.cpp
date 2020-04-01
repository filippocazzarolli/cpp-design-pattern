#include "es2/tag.cpp"
#include "es1/foo.cpp"
#include "es3/person.h"
#include "es3/personBuilder.h"
#include "es3/personAddressBuilder.h"
#include "es3/personJobBuilder.h"


namespace CppDesignPattern::Creation::Builder {

    namespace {

        void es1() {
            Es1::Foo f = Es1::Foo::Builder{}
                    .set_prop1(5)
                    .set_prop3(true)
                    .build();
        }

        void es2() {
            std::cout <<
                      Es2::P{
                              Es2::IMG{"http://pokemon.com/pikachu.png"},
                              Es2::SPAN{"testo di prova"}
                      }
                      << std::endl;
        }

        void es3() {
            Es3::Person p = Es3::Person::create()
                    .lives()
                    .at("123 London Road")
                    .with_postcode("SW1 1GB")
                    .in("London")

                    .works()
                    .at("PragmaSoft")
                    .as_a("Consultant")
                    .earning(10e6);

            cout << p << endl;
        }
    }

    void main() {
        es2();
        es3();
    }
}