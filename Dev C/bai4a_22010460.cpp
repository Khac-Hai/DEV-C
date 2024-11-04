#include <iostream>
void zeroSmaller(int &a, int &b) {
    if (a < b) {
        a = 0;
    } else if (b < a) {
        b = 0;
    }
}
