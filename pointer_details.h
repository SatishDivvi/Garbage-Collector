template <class T>
class ptrDetails {
    public:
        unsigned refCount;
        T *memPtr;
        bool isArray;
        unsigned arraySize;
}