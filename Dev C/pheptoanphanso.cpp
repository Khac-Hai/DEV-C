#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

struct phanso{
	int tuso,mauso;

	void toigian() {
        int thuong = gcd(tuso, mauso);
        tuso /= thuong;
        mauso /= thuong;
    }
    void 
};

int main(){
	 int T;
    cin >> T;

    while (T--) {
        phanso A, B, C, D;
        cin >> A.tuso >> A.mauso >> B.tuso >> B.mauso;
        C = A + B;
        D = A * B * C; 
        D.toigian();
		cout << C.tuso << " " << C.mauso << " " << D.tuso << " " << D.mauso << endl;
    }
	return 0;
} 
