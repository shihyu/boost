#include <boost/format.hpp>
#include <iostream>
using namespace std;
void test_format() {
    cout << boost::format("writing %1%,  x=%2% : %3%-th try") % "toto" % 40.23 % 50 << endl;
    boost::format f("a=%1%,b=%2%,c=%3%,a=%1%");
    f % "string" % 2 % 10.0;
    cout << f.str() << endl;
}

int main(int argc, char* argv[]) {
    test_format();
    return 0;
}
