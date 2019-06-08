#include "pointer.h"
#include "LeakTester.h"

int main()
{
    Pointer<int> p = new int(19);
    p = new int[1, 2, 3, 4];
    return 0;
}