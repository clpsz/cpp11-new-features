#include "../common.h"
#include <thread>
#include <chrono> // for time peroid




int num1 = 0;
thread_local int num2 = 0;


void task()
{
    int count = 10;
    cout << "Address of num1: " << &num1 << endl;
    cout << "Address of num2: " << &num2 << endl;

    while (count--)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        cout << "num1 is: " << num1 << endl;
        cout << "num2 is: " << num2 << endl;
    }
}

void manipulate()
{
    int count = 10;
    cout << "Address of num1: " << &num1 << endl;
    cout << "Address of num2: " << &num2 << endl;

    while (count--)
    {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        num1++;
        num2++;
    }
}


int main(int argc, char *argv[])
{
    std::thread t1(task);
    std::thread t2(manipulate);
    t1.join();
    t2.join();


    return 0;
}
