#include "../common.h"


class Test
{
public:
    Test() : Test(0)
    {
        cout << "Calling Test()" << endl;
    }
    Test(int v) : var(v)
    {
        cout << "Calling Test(int)" << endl;
    }

    void dummy() {}

private:
    int var;
};


int main(int argc, char *argv[])
{
    Test t;
    t.dummy();

    return 0;
}

