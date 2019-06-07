template <class T>
class ptrDetails {
    public:
        unsigned refCount;
        T *memPtr;
        bool isArray;
        unsigned arraySize;
        ptrDetails(T *ptr, unsigned size = 0) {

        };
}