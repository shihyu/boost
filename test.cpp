#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>

#include <iostream>
using namespace std;

class D: public boost::enable_shared_from_this<D> {
public:
    D() {
        cout << "D::D()" << endl;
    }

    void func() {
        cout << "D::func()" << endl;
        boost::shared_ptr<D> p = shared_from_this();
    }
};

int main() {
    boost::shared_ptr<D> p(new D);
    p->func();
    return 0;
}
