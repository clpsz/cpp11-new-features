#include "../common.h"
#include <forward_list>


const int SIZE = 10;

int main(int argc, char *argv[])
{
    std::forward_list<int> fli;

    auto begin = fli.before_begin();
    for (int i = 0; i < SIZE; i++)
    {
        // begin is still the new begin after insert
        fli.insert_after(begin, SIZE - i);
    }

    for (auto i : fli)
    {
        cout << i << endl;
    }

    return 0;
}

