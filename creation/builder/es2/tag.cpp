#include <iostream>
#include <string>
#include <vector>


using namespace std;
namespace CppDesignPattern::Creation::Builder::Es2 {

    class Tag {
    protected:
        Tag(const string &name, const string &text)
                : name{name}, text{text} {}

        Tag(const string &name, const vector<Tag> &children)
                : name{name}, children{children} {}

    public:
        string name;
        string text;
        vector<Tag> children;
        vector<pair<string, string>> attribute;

        friend ostream &operator<<(ostream &os, const Tag &tag) {
            os << "<" << tag.name;

            for (const auto &att : tag.attribute) {
                os << " " << att.first << "=\"" << att.second << "\"";
            }

            if (tag.children.size() == 0 && tag.text.length() == 0) {
                os << "/>" << endl;
            } else {
                os << ">" << endl;

                if (tag.text.length()) {
                    os << tag.text << endl;
                }

                for (const auto &child : tag.children) {
                    os << child;
                }

                os << "</" << tag.name << ">" << std::endl;
            }

            return os;
        }
    };

    class P : public Tag {
    public:
        explicit P(const string &text)
                : Tag("P", text) {}

        P(std::initializer_list<Tag> children)
                : Tag("P", children) {}
    };

    class IMG : public Tag {
    public:
        explicit IMG(const string &url)
                : Tag{"IMG", ""} {
            this->attribute.emplace_back(make_pair("SRC", url));
        }
    };

    class SPAN : public Tag {
    public:
        explicit SPAN(const string &text)
                : Tag("SPAN", text) {}

        SPAN(std::initializer_list<Tag> children)
        : Tag("SPAN", children) {}
    };
}