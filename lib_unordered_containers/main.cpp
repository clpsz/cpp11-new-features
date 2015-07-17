#include "../common.h"
#include <unordered_map>


int main(int argc, char *argv[])
{
    std::unordered_map<string, int> si;

    si["abc"] = 1;
    si["def"] = 2;

    for (auto p : si)
    {
        cout << p.first << ": " << p.second << endl;
    }

    cout << "Buckets count: " << si.bucket_count() << endl;
    cout << "Max load factor: " << si.max_load_factor() << endl;

    return 0;
}

