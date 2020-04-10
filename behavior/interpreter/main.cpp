#include <iostream>
#include "simple.cpp"

using namespace std;

namespace CppDesignPattern::Behavior::Interpreter {

    namespace {
        void simple() {
            Simple::RNInterpreter interpreter;
            char input[20];
            strcpy(input, "MCMXCVI");
            cout << "Roman Numeral: " << input << "   interpretation is " << interpreter.interpret(input) << endl;
            strcpy(input, "MMMCMXCIX");
            cout << "Roman Numeral: " << input << "   interpretation is " << interpreter.interpret(input) << endl;
            strcpy(input, "MMMM");
            cout << "Roman Numeral: " << input << "   interpretation is " << interpreter.interpret(input) << endl;
            strcpy(input, "MDCLXVIIII");
            cout << "Roman Numeral: " << input << "   interpretation is " << interpreter.interpret(input) << endl;
            strcpy(input, "CXCX");
            cout << "Roman Numeral: " << input << "   interpretation is " << interpreter.interpret(input) << endl;
            strcpy(input, "MDCLXVI");
            cout << "Roman Numeral: " << input << "   interpretation is " << interpreter.interpret(input) << endl;
            strcpy(input, "DCCCLXXXVIII");
            cout << "Roman Numeral: " << input << "   interpretation is " << interpreter.interpret(input) << endl;
        }
    }

    void main() {
        simple();
    }

}