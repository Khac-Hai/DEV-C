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
    
};

int main(){
	thuong thuong;
	cin >> thuong.tuso;
	cin >> thuong.mauso;
    thuong.toigian();
    cout << thuong.tuso << " " << thuong.mauso << " " << endl;
	return 0;
}
