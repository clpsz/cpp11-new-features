#include "../common.h"

int main(int argc, char *argv[])
{
    int x = 4;
    //assign lamba to f
    auto f = [x](int y)->int{return x + y + 3;};
    cerr << f(5) << endl;

    std::vector<int> myVector;
    myVector.push_back(2);
    myVector.push_back(1);
    myVector.push_back(3);

    // using lambda as compare function
    std::sort(myVector.begin(), myVector.end(), [](const int &a, const int &b)->bool{return a > b;});
    for (int item : myVector)
    {
        cerr << item << endl;
    }
    
    return 0;
}

