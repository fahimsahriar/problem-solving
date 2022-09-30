#include <iostream>
using namespace std;

int main() {
    int a,b;
    a = 6;
    b = 5;
    a = b | a;
    a = a>>1;
    cout << a;
    return 0;
}
