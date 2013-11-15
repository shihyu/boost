#include <boost/any.hpp>
#include <vector>
#include <iostream>
using namespace std;
using namespace boost;

void test_any() {
    std::vector<any> a;
    a.push_back(2);
    a.push_back(string("test"));

    for (int i = 0; i < a.size(); ++i) {
        cout << a[i].type().name() << endl;

        try {
            int result = boost::any_cast<int>(a[i]);
            cout << result << endl;
        } catch (bad_any_cast& ex) {
            cout << "cast error:" << ex.what() << endl;
        }
    }
}

int main(int argc, char* argv[]) {
    test_any();
    return 0;
}
