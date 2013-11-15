#include <boost/thread.hpp>
using namespace std;
using namespace boost;
void mythread() {
    cout << "hello, thread!" << endl;
}

void test_thread() {
    boost::function< void () > f(mythread);
    thread t(f);
    t.join();
    cout << "thread is over!" << endl;
}

int main(int argc, char* argv[]) {
    test_thread();
    return 0;
}
