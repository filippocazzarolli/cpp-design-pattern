#include <string>
#include <iostream>
#include <vector>

using namespace std;

namespace CppDesignPattern::Structure::Flyweight::Es1 {

// Il pattern consiste ne separare l'informazione del maiuscolo all'interno di un array distinto
    class FormattedText {
        string plain_text;
        bool *caps;
    public:
        FormattedText(const string &plainText)
                : plain_text{plainText} {
            caps = new bool[plainText.length()];
            memset(caps, false, plain_text.length());
        }

        ~FormattedText() {
            delete[] caps;
        }

        void capitalize(int start, int end) {
            for (int i = start; i <= end; ++i)
                caps[i] = true;
        }

        friend std::ostream &operator<<(std::ostream &os, const FormattedText &obj) {
            string s;
            for (int i = 0; i < obj.plain_text.length(); ++i) {
                char c = obj.plain_text[i];
                s += (obj.caps[i] ? toupper(c) : c);
            }
            return os << s;
        }
    };
}