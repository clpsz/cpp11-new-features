#include "../common.h"
#include <memory>

using std::shared_ptr;
using std::unique_ptr;
using std::weak_ptr;
using std::make_shared;

class Test
{
public:
    Test(const char *n);
    ~Test();

private:
    string name;
};

Test::Test(const char *n):
    name(n)
{
    cout << "Constructor of " << name << " called" << endl;
}

Test::~Test()
{
    cout << "Destructor of " << name << " called" << endl;
}


int main(int argc, char *argv[])
{
    shared_ptr<Test> pt1 = make_shared<Test>("pt1");
    shared_ptr<Test> pt2(new Test("pt2"));
    shared_ptr<Test> ppt1 = pt1;
    pt2.reset();
    cout << endl;

    unique_ptr<Test> pt3(new Test("pt3"));
    unique_ptr<Test> pt4;

    // error, can't copy unique ptr;
    //pt4 = pt3;
    pt4.reset(pt3.release());

    cout << "pt1 count: " << pt1.use_count() << endl;
    shared_ptr<Test> pt5 = pt1;
    cout << "pt1 count: " << pt1.use_count() << endl;
    weak_ptr<Test> pt6 = pt1;
    cout << "pt1 count: " << pt1.use_count() << endl;

    cout << "return from here" << endl;
    return 0;
}

