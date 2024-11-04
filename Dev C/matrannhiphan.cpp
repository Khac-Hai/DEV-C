#include<bits/stdc++.h>

using namespace std;

int main() {
    int hang; 
    int cot = 3; 
    int A[N][3]; 
	cin >> hang;
    
   
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            cin >> A[i][j];
        }
    }
    
    int ketqua = 0;
    for (int i = 0; i < hang; i++) {
        int so1 = 0;
        int so0 = 0;

        for (int j = 0; j < cot; j++) {
            if (A[i][j] == 1) {
                so1++;
            } else {
                so0++;
            }
        }
		if (so1 > so0) {
            ketqua++;
        }
    }
    
	cout << ketqua << endl;
	return 0;
}
