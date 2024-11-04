#include <iostream>
#include <algorithm>

using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

int GCD(int a, int b) {
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

void simplifyFraction(Fraction& frac) {
    int gcd = GCD(frac.numerator, frac.denominator);
    frac.numerator /= gcd;
    frac.denominator /= gcd;
}

Fraction addFractions(const Fraction& a, const Fraction& b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    simplifyFraction(result);
    return result;
}

Fraction multiplyFractions(const Fraction& a, const Fraction& b) {
    Fraction result;
    result.numerator = a.numerator * b.numerator;
    result.denominator = a.denominator * b.denominator;
    simplifyFraction(result);
    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        Fraction A, B, C, D;
        cin >> A.numerator >> A.denominator >> B.numerator >> B.denominator;

        // Tính C = (A + B)^2
        C = addFractions(A, B);
        C = multiplyFractions(C, C);

        // Tính D = A x B x C
        D = multiplyFractions(A, B);
        D = multiplyFractions(D, C);

        cout << C.numerator << "/" << C.denominator << " " << D.numerator << "/" << D.denominator << endl;
    }

    return 0;
}

