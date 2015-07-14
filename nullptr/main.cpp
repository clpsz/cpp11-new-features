#include "../common.h"


int main(int argc, char *argv[])
{
    char *p = nullptr;

    if (p == 0)
    {
        cout << "nullptr equals 0" << endl;
    }
    if (p == NULL)
    {
        cout << "nullptr equals NULL" << endl;
    }

    return 0;
}
