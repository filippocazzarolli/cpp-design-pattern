#include <iostream>
#include <vector>
#include "simple.cpp"
#include "undo.cpp"
#include "macro.cpp"

using namespace std;

namespace CppDesignPattern::Behavior::Command {
    namespace {
        void simple() {
            Simple::BankAccount ba;
//            vector<Simple::BankAccountCommand> commands{
            Simple::CompositeBankAccountCommand commands{
                    Simple::BankAccountCommand{ba, Simple::BankAccountCommand::deposit, 100},
                    Simple::BankAccountCommand{ba, Simple::BankAccountCommand::withdraw, 200}
            };

            cout << ba.balance << endl;

            // apply all the commands
            /*for (auto& cmd : commands)
            {
              cmd.call();
            }*/
            commands.call();

            cout << ba.balance << endl;
        }

        void undo() {
            Undo::BankAccount ba;
            /*vector<BankAccountCommand> commands{*/
            Undo::CompositeBankAccountCommand commands{
                    Undo::BankAccountCommand{ba, Undo::BankAccountCommand::deposit, 100},
                    Undo::BankAccountCommand{ba, Undo::BankAccountCommand::withdraw, 200}
            };

            cout << ba.balance << endl;

            // apply all the commands
            /*for (auto& cmd : commands)
            {
            cmd.call();
            }*/
            commands.call();

            cout << ba.balance << endl;

            /*for_each(commands.rbegin(), commands.rend(),
            [](const BankAccountCommand& cmd) { cmd.undo(); });*/
            commands.undo();

            cout << ba.balance << endl;
        }

        void macro() {
            Macro::BankAccount ba;
            /*vector<BankAccountCommand> commands{*/
            Macro::CompositeBankAccountCommand commands{
                    Macro::BankAccountCommand{ba, Macro::BankAccountCommand::deposit, 100},
                    Macro::BankAccountCommand{ba, Macro::BankAccountCommand::withdraw, 200}
            };

            cout << ba.balance << endl;

            // apply all the commands
            /*for (auto& cmd : commands)
            {
            cmd.call();
            }*/
            commands.call();

            cout << ba.balance << endl;

            /*for_each(commands.rbegin(), commands.rend(),
            [](const BankAccountCommand& cmd) { cmd.undo(); });*/
            commands.undo();

            cout << ba.balance << endl;
        }
    }

    void main() {
        simple();
        cout << "--------------------" << endl;
        undo();
        cout << "--------------------" << endl;
        macro();
    }
}
