#pragma once

#include <string>

namespace CppDesignPattern::Behavior::Observer {
    template<typename T>
    struct Observer {
        virtual void field_changed(
                T &source,
                const std::string &field_name
        ) = 0;
    };
}

