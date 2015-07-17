#include "../common.h"
#include <array>


const int SIZE = 10;

int main(int argc, char *argv[])
{
    std::array<int, SIZE> ai;

    for (int i = 0; i < SIZE; i++)
    {
        ai[i] = SIZE - i;
    }

    cout << "Size of array is: " << ai.size() << endl;
    for (auto i : ai)
    {
        cout << i << endl;
    }

    return 0;
}

