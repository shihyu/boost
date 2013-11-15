#include <boost/lexical_cast.hpp>
#include <iostream>
using namespace std;
void test_lexical_cast() {
    try {
        int i = boost::lexical_cast<int>("123");
        cout << i << endl;
    } catch (...) {
        cout << "Exception happen" << endl;
    }
}

int main(int argc, char* argv[]) {
    test_lexical_cast();
    return 0;
}
