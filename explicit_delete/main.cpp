#include "../common.h"


class Test
{
public:
    // inlinede default constructor
    Test() = default;
    Test(const Test &) = delete;
    Test &operator =(const Test &) = delete;

    ~Test() = default;
    void dummy() {}
};


int main(int argc, char *argv[])
{
    Test t1;
    t1.dummy();

    // compile error
    // Test t2(t1);

    return 0;
}
