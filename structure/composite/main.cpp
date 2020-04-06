#include "es1.cpp"


namespace CppDesignPattern::Structure::Composite {
    namespace {
        void es1() {
            Es1::Group root("root");
            Es1::Circle c1, c2;
            root.objects.push_back(&c1);

            Es1::Group subgroup("sub");
            subgroup.objects.push_back(&c2);

            root.objects.push_back(&subgroup);

            root.draw();
        }
    }

    void main() {
        es1();
    }
}