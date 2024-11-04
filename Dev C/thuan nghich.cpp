#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const std::string& number) {
    int left = 0;
    int right = number.length() - 1;

    while (left < right) {
        if (number[left] != number[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int numTests;
    cin >> numTests;

    for (int i = 0; i < numTests; ++i) {
        string number;
        cin >> number;

        if (isPalindrome(number)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

