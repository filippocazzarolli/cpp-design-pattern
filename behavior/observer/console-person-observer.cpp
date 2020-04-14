#include <iostream>
#include "Observer.cpp"
#include "person.cpp"

using namespace std;

namespace CppDesignPattern::Behavior::Observer {
    struct ConsolePersonObserver
            : public Observer<Person> {
    private:
        void field_changed(Person &source, const std::string &field_name) override {
            cout << "Person's " << field_name << " has changed to ";
            if (field_name == "age") cout << source.get_age();
            cout << ".\n";
        }
    };
}