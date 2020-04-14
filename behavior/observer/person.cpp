#pragma once

#include "observable.cpp"

namespace CppDesignPattern::Behavior::Observer {
    class Person : public Observable<Person> {
        int age{0};
    public:
        Person() {}

        Person(int age) : age(age) {}

        int get_age() const {
            return age;
        }

        void set_age(int age) {
            if (this->age == age) return;

            this->age = age;
            notify(*this, "age");
        }
    };
}