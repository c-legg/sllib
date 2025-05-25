#ifndef SLLIB_TOOLS_HPP
#define SLLIB_TOOLS_HPP

namespace sllib {
    template<typename T>
    void swap(T &a, T &b) {
        T tmp(a);
        a=b;
        b=tmp;
    }
}

#endif