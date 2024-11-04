#include <iostream>
#include "zeroSmaller.cpp"
#include "arrayMinMax.cpp"
using namespace std;

int main() {
    // Phan a
    int a, b, c, d;
    cout << "Nhap gia tri cho a: ";
    cin >> a;
    cout << "Nhap gia tri cho b: ";
    cin >> b;
    cout << "Nhap gia tri cho c: ";
    cin >> c;
    cout << "Nhap gia tri cho d: ";
    cin >> d;

    zeroSmaller(a, b);
    zeroSmaller(c, d);

    cout << "a = " << a << ", b = " << b << endl;
    cout << "c = " << c << ", d = " << d << endl;

    // Phan b
    int intArr[5];
    double doubleArr[5];
    string strArr[5];

    cout << "Nhap 5 so nguyen cho intArr: ";
    for (int i = 0; i < 5; i++) {
        cin >> intArr[i];
    }

    cout << "Nhap 5 s? thuc cho doubleArr: ";
    for (int i = 0; i < 5; i++) {
        cin >> doubleArr[i];
    }

    cin.ignore(); 

    cout << "Nhap 5 chuoi cho strArr: ";
    for (int i = 0; i < 5; i++) {
        getline(cin, strArr[i]);
    }

    int maxInt, minInt;
    double maxDouble, minDouble;
    string maxStr, minStr;

    findMinMax(intArr, 5, maxInt, minInt);
    findMinMax(doubleArr, 5, maxDouble, minDouble);
    findMinMax(strArr, 5, maxStr, minStr);

    cout << "Max int: " << maxInt << ", Min int: " << minInt << endl;
    cout << "Max double: " << maxDouble << ", Min double: " << minDouble << endl;
    cout << "Max string: " << maxStr << ", Min string: " << minStr << endl;

    return 0;
}
