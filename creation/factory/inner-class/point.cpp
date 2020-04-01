#include <iostream>

namespace CppDesignPattern::Creation::Factory::InnerClass {
    class Point {
        class PointFactory {
            PointFactory() {}

        public:
            static Point NewCartesian(float x, float y) {
                return {x, y};
            }

            static Point NewPolar(float r, float theta) {
                return {r * cos(theta), r * sin(theta)};
            }
        };

    public:
        float x, y;
        static PointFactory Factory;

        friend std::ostream &operator<<(std::ostream &os, const Point &obj) {
            return os
                    << "x: " << obj.x
                    << " y: " << obj.y;
        }
    };
}
