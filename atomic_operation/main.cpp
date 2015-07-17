#include "../common.h"
#include <thread>
#include <atomic>
#include <chrono>




int main(int argc, char *argv[])
{
    // test if these types are already lock free
    cout << ATOMIC_BOOL_LOCK_FREE << endl;
    cout << ATOMIC_CHAR_LOCK_FREE << endl;
    cout << ATOMIC_SHORT_LOCK_FREE << endl;
    cout << ATOMIC_INT_LOCK_FREE << endl;
    cout << ATOMIC_LONG_LOCK_FREE << endl;
    cout << ATOMIC_LLONG_LOCK_FREE << endl;
    cout << ATOMIC_WCHAR_T_LOCK_FREE << endl;

    // definition of a atomic int
    std::atomic<int> inta(0);
    inta++;
    cout << inta << endl;

    return 0;
}
