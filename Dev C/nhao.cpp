#include <iostream>

int main() {
    int hang; 
    int cot = 3; 
    int A[100][3]; 
	cin >> hang;
    
   
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            cin >> A[i][j];
        }
    }

    int result = 0;

    for (int i = 0; i < hang; i++) {
        int count_1 = 0;
        int count_0 = 0;

        for (int j = 0; j < cot; j++) {
            if (A[i][j] == 1) {
                count_1++;
            } else {
                count_0++;
            }
        }

        if (count_1 > count_0) {
            result++;
        }
    }

    cout << result << std::endl;

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int n, m, p;
    
    cout << "Nh?p s? h�ng c?a ma tr?n A: ";
    cin >> n;
    cout << "Nh?p s? c?t c?a ma tr?n A: ";
    cin >> m;
    cout << "Nh?p s? c?t c?a ma tr?n B: ";
    cin >> p;
    
    // Khai b�o v� kh?i t?o m?ng cho ma tr?n A
    int A[n][m];
    cout << "Nh?p ma tr?n A " << n << "x" << m << ":\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    
    // Khai b�o v� kh?i t?o m?ng cho ma tr?n B
    int B[m][p];
    cout << "Nh?p ma tr?n B " << m << "x" << p << ":\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }
    
    // Khai b�o m?ng cho ma tr?n k?t qu? C v� kh?i t?o gi� tr? ban �?u l� 0
    int C[n][p];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }
    
    // T�nh t�ch ma tr?n
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // In ma tr?n k?t qu? C

