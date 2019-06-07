template <class T>
class ptrDetails {
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
        };
}