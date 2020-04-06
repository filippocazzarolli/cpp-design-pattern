#include "es1.cpp"

namespace CppDesignPattern::Structure::Bridge {
    namespace {
        void es1() {
            Es1::RasterRenderer rr;
            Es1::Circle raster_circle{rr, 5, 5, 5};
            raster_circle.draw();
            raster_circle.resize(2);
            raster_circle.draw();
        }
    }

    void main() {
        es1();
    }
}
