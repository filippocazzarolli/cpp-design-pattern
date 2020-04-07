#include <string>
#include <iostream>
#include <vector>

using namespace std;

namespace CppDesignPattern::Structure::Flyweight::Es2 {

    class BetterFormattedText {
    public:
        struct TextRange {
            int start, end;
            bool capitalize, bold, italic;

            bool covers(int position) const {
                return position >= start && position <= end;
            }
        };

        TextRange &get_range(int start, int end) {
            formatting.emplace_back(TextRange{start, end});
            return *formatting.rbegin();
        }

        explicit BetterFormattedText(const string &plainText)
                : plain_text{plainText} {
        }

        friend std::ostream &operator<<(std::ostream &os, const BetterFormattedText &obj) {
            string s;
            for (size_t i = 0; i < obj.plain_text.length(); i++) {
                auto c = obj.plain_text[i];
                for (const auto &rng : obj.formatting) {
                    if (rng.covers(i) && rng.capitalize)
                        c = toupper(c);
                    s += c;
                }
            }
            return os << s;
        }

    private:
        string plain_text;
        vector<TextRange> formatting;
    };

}