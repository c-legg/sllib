#ifndef SLLIB_PAIR_HPP
#define SLLIB_PAIR_HPP

namespace sllib {
    template<typename T, long long len>
    class array {
        private:
            T *arr;
        public:
            long long size() { return len; }

            bool empty() { return len==0; }

            T& at(long long loc) {
                if(loc>=len) exit(1);
                return arr[loc];
            }

            void ch(long long loc, T val) {
                if(loc>=len) exit(1);
                arr[loc]=val;
            }

            T front() { return arr[0]; }

            T back() { return arr[len-1]; }

            void fill(T val) {
                for(long long i(0); i<len; i++) arr[i]=val;
            }

            template<long long lo>
            void swap(array<T, lo> &oth) {
                T *tmp=new T[lo];
                for(long long i(0); i<lo; i++) tmp[i]=oth[i];
                oth.arr=new T[len];
                for(long long i(0); i<len; i++) oth.arr[i]=this->arr[i];
                this->arr=new T[lo];
                for(long long i(0); i<lo; i++) this->arr[i]=tmp[i];
                delete tmp;
            }

            array() {
                if(len<=0) exit(1);
                arr=new T[len];
            }

            template<long long lo>
            array(const array<T, lo> &oth) {
                if(lo>len) exit(0);
                for(long long i(0); i<oth.size(); i++) arr[i]=oth.at(i);
            }

            ~array() {
                delete arr;
            }

            T& operator[] (long long loc) {
                return arr[loc];
            }
    };
}

#endif
