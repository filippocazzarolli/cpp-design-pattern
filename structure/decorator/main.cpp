#include <iostream>
#include "dynamic.cpp"
#include "static.cpp"
#include "pointer.cpp"
#include "function.cpp"

using namespace std;

namespace CppDesignPattern::Structure::Decorator {
    namespace {
        void dynamices() {
            Dynamic::Circle circle{5};
            cout << circle.str() << endl;

            Dynamic::ColoredShape red_circle{circle, "red"};
            cout << red_circle.str() << endl;

            //red_circle.resize(); // oops

            Dynamic::TransparentShape red_half_visible_circle{red_circle, 128};
            cout << red_half_visible_circle.str() << endl;
        };

        void statices() {
            // won't work without a default constructor
            Static::ColoredShape<Static::Circle> green_circle{"green"};
            green_circle.radius = 123;
            cout << green_circle.str() << endl;

            Static::TransparentShape<Static::ColoredShape<Static::Square>> blue_invisible_square{0};
            blue_invisible_square.color = "blue";
            blue_invisible_square.side = 321;
            cout << blue_invisible_square.str() << endl;
        };

        void pointeres() {
            // 8. Client has the responsibility to compose desired configurations
            Pointer::Widget *aWidget = new Pointer::BorderDecorator(
                    new Pointer::BorderDecorator(new Pointer::ScrollDecorator(new Pointer::TextField(80, 24))));
            aWidget->draw();
            delete aWidget;
        };

        double add(double a, double b) {
            cout << a << "+" << b << "=" << (a + b) << endl;
            return a + b;
        }


        void functiones() {
            Function::Logger([]() { cout << "Hello world!" << endl; }, "Hello function")();

            auto call = Function::make_logger2([]() { cout << "Hello!" << endl; }, "HelloFunction");
            call();

            auto logged_add = Function::make_logger3(add, "Add");
            auto result = logged_add(2, 3);
        }
    }

    void main() {
        dynamices();
        statices();
        pointeres();
        functiones();
    }
}
