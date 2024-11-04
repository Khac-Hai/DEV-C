#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int n, k;
        cin >> n >> k; 
        int A[100]; 

        for (int i = 0; i < n; i++) {
            cin >> A[i]; 
        }

        
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (A[j] > A[j + 1]) {
                    int temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                }
            }
        }
        cout << A[k - 1] << endl;
    }
    return 0;
}

