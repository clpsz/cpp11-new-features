#include "../common.h"
#include <memory>


int main(int argc, char *argv[])
{
    int aint[] = {0, 1, 2, 3};

    int *pa0 = std::begin(aint);
    cout << *pa0 << endl;

    for (auto p = std::begin(aint); p != std::end(aint); p++)
    {
        cout << *p << endl;
    }


    vector<int> vint = {4, 5, 6, 7};
    auto pv1 = std::begin(vint);

    cout << *pv1 << endl;
    for (auto p = std::begin(vint); p != std::end(vint); p++)
    {
        cout << *p << endl;
    }


    return 0;
}

