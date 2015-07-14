#include "../common.h"


int fint()
{
    return 3;
}

int main(int argc, char *argv[])
{
    double a = 3.3;
    decltype(a) aa = 4.4;
    cout << aa << endl;



    decltype(fint()) b = 33;
    cerr << b << endl;

    return 0;
}

