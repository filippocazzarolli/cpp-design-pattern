#include <iostream>
#include <string>

using namespace std;

namespace CppDesignPattern::Behavior::ChainOfResponsibility::Es1 {
    struct Creature {
        string name;
        int attack, defense;

        Creature(const string &name, const int attack, const int defense)
                : name(name),
                  attack(attack),
                  defense(defense) {
        }


        friend ostream &operator<<(ostream &os, const Creature &obj) {
            return os
                    << "name: " << obj.name
                    << " attack: " << obj.attack
                    << " defense: " << obj.defense;
        }
    };

    class CreatureModifier {
        CreatureModifier *next{nullptr}; // unique_ptr
    protected:
        Creature &creature; // pointer or shared_ptr
    public:
        explicit CreatureModifier(Creature &creature)
                : creature(creature) {
        }

        virtual ~CreatureModifier() = default;

        void add(CreatureModifier *cm) {
            if (next) next->add(cm);
            else next = cm;
        }

        // two approaches:

        // 1. Always call base handle(). There could be additional logic here.
        // 2. Only call base handle() when you cannot handle things yourself.

        virtual void handle() {
            if (next) next->handle();
        }
    };

// 1. Double the creature's attack
// 2. Increase defense by 1 unless power > 2
// 3. No bonuses can be applied to this creature

    class NoBonusesModifier : public CreatureModifier {
    public:
        explicit NoBonusesModifier(Creature &creature)
                : CreatureModifier(creature) {
        }

        void handle() override {
            // nothing
        }
    };

    class DoubleAttackModifier : public CreatureModifier {
    public:
        explicit DoubleAttackModifier(Creature &creature)
                : CreatureModifier(creature) {
        }

        void handle() override {
            creature.attack *= 2;
            CreatureModifier::handle();
        }
    };

    class IncreaseDefenseModifier : public CreatureModifier {
    public:
        explicit IncreaseDefenseModifier(Creature &creature)
                : CreatureModifier(creature) {
        }


        void handle() override {
            if (creature.attack <= 2)
                creature.defense += 1;
            CreatureModifier::handle();
        }
    };
}
