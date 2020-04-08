#include <string>
#include <iostream>
#include <vector>

using namespace std;

namespace CppDesignPattern::Structure::Proxy::Virtual {
    struct Image {
        virtual ~Image() = default;

        virtual void draw() = 0;
    };

    struct Bitmap : Image {
        Bitmap(const string &filename) {
            cout << "Loading image from " << filename << endl;
        }

        void draw() override {
            cout << "Drawing image" << endl;
        }
    };

    struct LazyBitmap : Image {
        LazyBitmap(const string &filename) : filename(filename) {}

        ~LazyBitmap() { delete bmp; }

        void draw() override {
            if (!bmp)
                bmp = new Bitmap(filename);
            bmp->draw();
        }

    private:
        Bitmap *bmp{nullptr};
        string filename;
    };
}