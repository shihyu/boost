#include <vector>
#include <iostream>
#include <boost/array.hpp>
using namespace std;
void test_array() {
    boost::array<int, 3> a = {1, 2, 3};

    for (size_t i = 0; i < a.size(); ++i) {
        cout << a[i] << endl;
    }
}

int main(int argc, char* argv[]) {
    test_array();
    return 0;
}
