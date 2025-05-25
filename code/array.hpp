#ifndef SLLIB_PAIR_HPP
#define SLLIB_PAIR_HPP

#include "tools.hpp"

namespace sllib {
    template<typename T>
    void swap(T &a, T &b) {
        T tmp;
        tmp=a;
        a=b;
        b=tmp;
    }
    
    template<typename T, long long len>
    class array {
        private:
            T *arr;
        public:
            long long size() { return len; }

            bool empty() { return size()==0; }

            T& at(long long loc) {
                if(loc>=len) exit(1);
                return arr[loc];
            }

            void ch(long long loc, T val) {
                if(loc>=len) exit(1);
                arr[loc]=val;
            }

            T& front() { return arr[0]; }

            T& back() { return arr[len-1]; }

            void fill(T val) {
                for(long long i(0); i<len; i++) arr[i]=val;
            }

            
            void swap(array &oth) {
                T *tmp(arr);
                arr=oth.arr;
                oth.arr=tmp;
            }

            array() {
                if(len<=0) exit(1);
                arr=new T[len];
            }

            ~array() {
                delete arr;
            }

            array& operator= (array &oth) {
                if(this->size()!=oth.size()) exit(1);
                for(long long i(0); i<len; i++) arr[i]=oth[i];
                return *this;
            }

            T& operator[] (long long loc) {
                return arr[loc];
            }
    };
}

#endif
