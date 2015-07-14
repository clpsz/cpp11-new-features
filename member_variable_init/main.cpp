#include "../common.h"


// struct is the same as class
struct Test
{
    int a = 3;
    int b;
    int c = 5;
};



int main(int argc, char *argv[])
{
    Test t;

    cout << t.a << endl;
    cout << t.b << endl;
    cout << t.c << endl;

    return 0;
}

