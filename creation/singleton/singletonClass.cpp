#include <iostream>

namespace CppDesignPattern::Creation::Singleton {

    class SingletonClass {
    private:
        static SingletonClass *instance;

        SingletonClass() = default;

    public:
        SingletonClass(const SingletonClass &) = delete;

        SingletonClass &operator=(const SingletonClass &) = delete;

        static SingletonClass *getInstance() {
            if (instance == nullptr) {
                instance = new SingletonClass();
            }

            return instance;
        }

    };

    SingletonClass* SingletonClass::instance = nullptr;
}