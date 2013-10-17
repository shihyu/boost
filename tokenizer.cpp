#include <boost/tokenizer.hpp>
#include <string>
using namespace std;
using namespace boost;
void test_tokenizer() {
    string s("This is  , a ,test!");
    tokenizer<> tok(s);

    for (tokenizer<>::iterator beg = tok.begin(); beg != tok.end(); ++beg) {
        cout << *beg << endl;
    }
}

int main(int argc, char* argv[]) {
    test_tokenizer();
    return 0;
}
