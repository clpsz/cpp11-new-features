#include "../common.h"


int fint()
{
    return 3;
}


int main(int argc, char *argv[])
{
    vector<string> vs;
    vs.push_back(string("abc"));
    vs.push_back(string("def"));
    vs.push_back(string("ghi"));


    for (auto it = vs.begin(); it != vs.end(); it++)
    {
        cout << *it << endl;
    }

    auto d = fint();
    cerr << d << endl;

    return 0;
}

