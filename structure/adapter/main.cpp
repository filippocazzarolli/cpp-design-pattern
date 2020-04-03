#include <iostream>
#include "simple.cpp"
#include "polymorphism.cpp"

using namespace std;

namespace CppDesignPattern::Structure::Adapter {
    namespace {
        void simple() {
            Simple::Rectangle *r = new Simple::RectangleAdapter(120, 200, 60, 40);
            r->draw();
        }

        void polymorphism() {
            Polymorphism::ExecuteInterface **objects = Polymorphism::initialize();
            for (int i = 0; i < 3; i++) {
                objects[i]->execute();
            }

            // 3. Client uses the new (polymporphism)
            for (int i = 0; i < 3; i++) {
                delete objects[i];
            }
            delete objects;
        }
    }

    void main() {
        simple();
        polymorphism();
    }
}
