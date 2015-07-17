#include "../common.h"
#include <thread>
#include <future>

int heavyCalc()
{
    int count = 10000;
    while (count--)
    {
    }

    cout << "heavyCalc() finished" << endl;

    return 33;
}


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
    std::future<int> res = std::async(heavyCalc);

    std::thread t(task, 3);
    t.join();

    // get should block heavyCalc finished
    cout << res.get() << endl;


    return 0;
}
