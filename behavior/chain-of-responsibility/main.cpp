#include <iostream>
#include "es1.cpp"

using namespace std;

namespace CppDesignPattern::Behavior::ChainOfResponsibility {
    namespace {
        void es1() {
            Es1::Creature goblin{"Goblin", 1, 1};
            Es1::CreatureModifier root{goblin};
            Es1::DoubleAttackModifier r1{goblin};
            Es1::DoubleAttackModifier r1_2{goblin};
            Es1::IncreaseDefenseModifier r2{goblin};
            //NoBonusesModifier nb{ goblin }; // effectively Command objects

            //root.add(&nb);
            root.add(&r1);
            root.add(&r1_2);
            root.add(&r2);

            root.handle(); // annoying

            cout << goblin << endl;
        }
    }

    void main() {
        es1();
    }
}
