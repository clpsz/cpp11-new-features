#include "../common.h"


class Test
{
public:
    // inlinede default constructor
    Test() = default;
    Test(const Test &) = default;
    Test & operator =(const Test &) = default;

    ~Test() = default;
    void print();
};

void Test::print()
{
    cout << "Test" << endl;
}


int main(int argc, char *argv[])
{
    Test t;
    t.print();

    return 0;
}
