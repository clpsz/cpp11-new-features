#include "../common.h"

class Test
{
public:
    void dummy() {}

private:
    char c;
    int i;
    short s;
    long long ll;
};


int main(int argc, char *argv[])
{
    alignas(2) Test t;
    cout << alignof(Test) << endl;

    t.dummy();

    return 0;
}
