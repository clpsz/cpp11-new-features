#include "../common.h"

enum enuma {red,
            green,
            blue};

// error, redeclaration
// enum enumb {red};

enum class enumA {red,
                  green,
                  blue};
enum class enumB {red,
                  green,
                  blue};



int main(int argc, char *argv[])
{
    enuma colora = green;
    cout << colora << endl;

    enumA colorA = enumA::green;
    if (colorA == enumA::green)
    {
        cout << "good" << endl;
    }
}

