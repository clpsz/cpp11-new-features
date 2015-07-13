#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


void demoAuto()
{
    int a = 1;
    int b = 2;
    auto c = a + b;

    cerr << c << endl;
}


int fint()
{
    return 3;
}

void demoDecltype()
{
    decltype(fint()) b = 33;
    cerr << b << endl;
}

void demoNewFor()
{
    std::vector<int> myVector;
    myVector.push_back(3);
    myVector.push_back(2);
    myVector.push_back(1);

    // C++11 style
    for(int item : myVector)
    {
        cerr << item << endl;
    }
}

void demoLambda()
{
    int x = 4;
    auto f = [x](int y)->int{return x + y + 3;};

    cerr << f(5) << endl;

    std::vector<int> myVector;
    myVector.push_back(2);
    myVector.push_back(1);
    myVector.push_back(3);

    // simple sort
    std::sort(myVector.begin(), myVector.end());
    for (int item : myVector)
    {
        cerr << item << endl;
    }

    // using lambda
    std::sort(myVector.begin(), myVector.end(), [](const int &a, const int &b)->bool{return a > b;});
    for (int item : myVector)
    {
        cerr << item << endl;
    }
}

void demoNullptr()
{
    int *p = nullptr;
    if (p == 0)
    {
        cerr << "nullptr is 0" << endl;
    }
}

int main(int argc, char *argv[])
{
    std::vector<void (*)(void)> demos;
    demos.push_back(demoAuto);
    demos.push_back(demoDecltype);
    demos.push_back(demoNewFor);
    demos.push_back(demoLambda);
    demos.push_back(demoNullptr);

    for (void (*demo)() : demos)
    {
        demo();
        cerr << "" << endl;
    }
}
