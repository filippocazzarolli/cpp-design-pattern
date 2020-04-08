#include <iostream>
#include "property.cpp"
#include "virtual.cpp"

using namespace std;

namespace CppDesignPattern::Structure::Proxy {
    namespace {
        void es_properety() {
            Property::Creature creature;
            creature.agility = 20;
            cout << creature.agility << endl;
        }

        void draw_image(Virtual::Image &img) {
            cout << "About to draw the image" << endl;
            img.draw();
            cout << "Done drawing the image" << endl;
        }

        void es_virtual() {
            Virtual::LazyBitmap img{"pokemon.png"};
            draw_image(img); // loaded whether the bitmap is loaded or not
            draw_image(img);
        }
    }

    void main() {
        es_properety();
        es_virtual();
    }
}