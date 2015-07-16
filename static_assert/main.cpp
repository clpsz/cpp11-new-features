#include "../common.h"


int main(int argc, char *argv[])
{
    const int a = 3;

    static_assert(a == 3, "a is not 3");

    // error
    // static_assert(a != 3, "a is 3");

    return 0;
}
