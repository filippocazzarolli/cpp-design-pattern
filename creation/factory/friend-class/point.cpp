#include <iostream>

namespace CppDesignPattern::Creation::Factory::FriendClass {

    class Point {
        // use a factory method
        Point(float x, float y) : x(x), y(y) {}

    public:
        float x, y;

        friend std::ostream &operator<<(std::ostream &os, const Point &obj) {
            return os
                    << "x: " << obj.x
                    << " y: " << obj.y;
        }

        friend class PointFactory;
    };

    class PointFactory {
    public:
        static Point NewCartesian(float x, float y) {
            return Point{x, y};
        }

        static Point NewPolar(float r, float theta) {
            return Point{r * cos(theta), r * sin(theta)};
        }
    };
}
