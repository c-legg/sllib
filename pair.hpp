#ifndef SLLIB_PAIR_HPP
#define SLLIB_PAIR_HPP

namespace sllib {
    template<typename T_F, typename T_S>
    class pair {
        public:
            T_F car;
            T_S cdr;

            pair() {}
            pair(T_F a, T_S b) :car(a), cdr(b) {}
            pair(const pair<T_F, T_S> &oth) :car(oth.car), cdr(oth.cdr) {}
    };

    template<typename T_F, typename T_S>
    pair<T_F, T_S> cons(T_F a, T_S b) {
        return pair<T_F, T_S>(a, b);
    }

    template<typename T_F, typename T_S>
    bool operator< (const pair<T_F, T_S> a, const pair<T_F, T_S> b) {
        return a.car<b.car ? 1 : (a.car==b.car ? a.cdr<b.cdr : 0);
    }

    template<typename T_F, typename T_S>
    bool operator> (const pair<T_F, T_S> a, const pair<T_F, T_S> b) {
        return b<a;
    }

    template<typename T_F, typename T_S>
    bool operator== (const pair<T_F, T_S> a, const pair<T_F, T_S> b) {
        return !(b<a) && !(a<b);
    }

    template<typename T_F, typename T_S>
    bool operator!= (const pair<T_F, T_S> a, const pair<T_F, T_S> b) {
        return !(a==b);
    }

    template<typename T_F, typename T_S>
    bool operator<= (const pair<T_F, T_S> a, const pair<T_F, T_S> b) {
        return a==b || a<b;
    }

    template<typename T_F, typename T_S>
    bool operator>= (const pair<T_F, T_S> a, const pair<T_F, T_S> b) {
        return a==b || a>b;
    }
}

#endif