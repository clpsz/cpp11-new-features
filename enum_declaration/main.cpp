#include "../common.h"


// for old stype enum
// add int type indicator when enuma is defined, in case of "Underlying type mismatch"
enum enuma : int;

// for new stype enum
enum class enumA;


int main(int argc, char *argv[])
{
    return 0;
}




// new stype enum
enum class enumA {red,
                  green,
                  blue};

// old stype enum
// add int type indicator in case of "Underlying type mismatch"
enum enuma : int {red,
            green,
            blue};

