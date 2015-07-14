#include "../common.h"


class B
{
public:
    virtual void f1(int) const {};
    virtual void f2() {};
    void f3();

    virtual void f5() final;
};

class D: public B
{
public:
    virtual void f1(int) const override {}
    virtual void f2() override {}

    // error not same function prototype, can't override
    // virtual void f1(int) override {}
    // error not virtual function, can't override
    // void f3() override {}
    // error no this function in base class
    // void f4() override {}

    // error, declared as final
    // void f5() {}
};


class B2 final
{
};


// error B2 declared as final
// class D2: public B2
// {
// };


int main(int argc, char *argv[])
{
}

