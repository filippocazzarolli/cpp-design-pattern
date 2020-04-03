#include <iostream>

namespace CppDesignPattern::Creation::Prototype {
    namespace {
        struct Point {
            int x{0}, y{0};

            Point() {}

            Point(const int x, const int y) : x{x}, y{y} {}
        };

        struct Line {
            Point *start, *end;

            Line(Point *const start, Point *const end)
                    : start(start), end(end) {
            }

            ~Line() {
                delete start;
                delete end;
            }

            // Le soluzioni sono due: deep copy oppure serializzare l'oggetto (boost cpp library)
            Line deep_copy() const {
                return Line{
                        new Point(start->x, start->y),
                        new Point(end->x, end->y)
                };
            }
        };
    }

    void main() {
        Line line1{
                new Point{3, 3},
                new Point{10, 10}
        };

        auto line2 = line1.deep_copy();
    }

}