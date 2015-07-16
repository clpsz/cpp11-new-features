#include "../common.h"
#include <bitset>


int main(int argc, char *argv[])
{
    std::bitset<32> b(3u);

    for (decltype(b.size()) i = 0; i < b.size(); i++)
    {
        cout << i << ": " << b[i] << endl;
    }
    cout << endl;

    b.flip();
    for (decltype(b.size()) i = 0; i < b.size(); i++)
    {
        cout << i << ": " << b[i] << endl;
    }


    return 0;
}

