#include "../common.h"
#include <tuple>


int main(int argc, char *argv[])
{
    std::tuple<int, double> tid;
    
    tid = (std::make_tuple(3, 5));
    
    cout << "int: " << std::get<0>(tid) << endl
         << "double: " << std::get<1>(tid) << endl;

    return 0;
}

