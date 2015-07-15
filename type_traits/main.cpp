#include "../common.h"
#include <type_traits>


typedef int MY_INT;
typedef float MY_FLOAT;

int main(int argc, char *argv[])
{
    if (std::is_integral<MY_INT>::value)
    {
        cout << "MY_INT is of int type" << endl;
    }
    if (!std::is_integral<MY_FLOAT>::value)
    {
        cout << "MY_FLOAT is not of int type" << endl;
    }

    return 0;
}
