#include <iostream>
#include <string>
#include <vector>
#include "simple.cpp"

using namespace std;

namespace CppDesignPattern::Behavior::Interpreter {

    namespace {
        void simple() {
            Simple::RNInterpreter interpreter;
            vector<string> value = {"MCMXCVI", "MMMCMXCIX", "MMMM", "CXCX", "MDCLXVI", "DCCCLXXXVIII"};
            auto it = value.begin();
            while (++it != value.end()) {
                cout << "Roman Numeral: " << *it << "   interpretation is " << interpreter.interpret(it->data())
                     << endl;
            }
        }
    }

    void main() {
        simple();
    }

}