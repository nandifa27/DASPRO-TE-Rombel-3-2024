#include <iostream>
using namespace std;

int main(int x) {
    if (x < 2) {
        return false;
    }
    for (int i = 2; i*i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
