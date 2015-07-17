#include "../common.h"
#include <thread>


void task(int num)
{
    int count = 10;

    while (count--)
    {
        cout << num << endl;
    }
}


int main(int argc, char *argv[])
{
    std::thread t(task, 3);
    t.join();

    return 0;
}
