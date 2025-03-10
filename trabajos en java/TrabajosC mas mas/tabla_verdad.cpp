#include <iostream>

using namespace std;

int main() {
    bool a = true;
    bool b = false;
    cout << (a && b) << endl;  // false (0)

    int a_num = 2, b_num = 3, c = 4, d = 10;

    cout << (a_num == b_num && c < d) << endl;  // false (0)
    cout << (!(a_num == b_num) && c < d) << endl;  // true (1)

    return 0;
}