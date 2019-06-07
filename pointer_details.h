template <class T>
class PtrDetails {
    public:
        unsigned refCount;
        T *memPtr;
        bool isArray;
        unsigned arraySize;
        ptrDetails(T *ptr, unsigned size = 0) {
            refCount = 1;
            memPtr = ptr;
            if(size > 0)
                isArray = true;
            else
                isAttay = false;
            arraySize = size;
        };
}

template <class T>
bool operator==(const PtrDetails<T> &obj_1, const PtrDetails<T> &obj_2){
    return obj_1.memPtr == obj_2.memPtr;
}
