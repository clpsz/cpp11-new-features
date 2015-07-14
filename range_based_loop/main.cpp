#include "../common.h"



int main(int argc, char *argv[])
{
    vector<string> vs;
    vs.push_back(string("abc"));
    vs.push_back(string("def"));
    vs.push_back(string("ghi"));

    for (auto s : vs)
    {
        cout << s << endl;
    }


    return 0;
}

