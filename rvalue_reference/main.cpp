#include "../common.h"


class Test
{
public:
    Test() = default;
    Test(int v);
    Test(const Test &rhs);
    Test(const Test &&rhs);
    Test & operator =(const Test &rhs);
    Test & operator =(const Test &&rhs);

    void print()
    {
        cout << var << endl;
    }

private:
    int var;
};

Test::Test(int v):
    var(v)
{
    cout << "Default constructor called for " << var << endl;
}

Test::Test(const Test &rhs)
{
    var = rhs.var;
    cout << "Copy constructor called for " << var << endl;
}

Test &Test::operator=(const Test &rhs)
{
    var = rhs.var;
    cout << "Copy assignment called for " << var << endl;

    return *this;
}

Test::Test(const Test &&rhs)
{
    var = rhs.var;

    cout << "Move constructor called for " << var << endl;
}

Test &Test::operator=(const Test &&rhs)
{
    var = rhs.var;
    cout << "Move assignment called for " << var << endl;

    return *this;
}




int main(int argc, char *argv[])
{
    string s1("abc");
    string &&s2 = std::move(s1);

    cout << s1 << endl;
    cout << s2 << endl;


    Test t1(1);
    Test t2(t1);
    Test t3;
    t3 = t1;

    Test t4(std::move(t1));
    Test t5;
    t5 = std::move(t1);


    return 0;
}

