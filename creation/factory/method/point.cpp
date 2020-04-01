#include <cmath>
#include <iostream>

namespace CppDesignPattern::Creation::Factory::Method {
    class Point {
        Point(const float x, const float y)
                : x{x}, y{y} {}

    public:
        float x, y;

        friend std::ostream &operator<<(std::ostream &os, const Point &obj) {
            return os
                    << "x: " << obj.x
                    << " y: " << obj.y;
        }

        // Factory method
        static Point NewCartesian(float x, float y) {
            return {x, y};
        }

        static Point NewPolar(float r, float theta) {
            return {r * cos(theta), r * sin(theta)};
        }
    };
}
