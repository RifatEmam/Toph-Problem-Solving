
#include <iostream>
#include <string>
using namespace std;

int main() {
    int A;
    cin >> A;

    string num = to_string(A);
    int len = num.length();

    for (int i = 0; i < len; i++) {
        cout << num[i];



        if ((len - i - 1) % 3 == 0 && i != len - 1) {
            cout << ",";
        }
    }

    return 0;
}
