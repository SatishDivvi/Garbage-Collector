template <class T>
class PtrDetails {
    public:
        unsigned refCount;
        T *memPtr;
        bool isArray;
        unsigned arraySize;
        PtrDetails(T *ptr, unsigned size = 0) {
            refCount = 1;
            memPtr = ptr;
            arraySize = size;
            if(arraySize > 0)
                isArray = true;
            else
                isArray = false;
        };
}

template <class T>
bool operator==(const PtrDetails<T> &obj_1, const PtrDetails<T> &obj_2){
    return obj_1.memPtr == obj_2.memPtr;
}
