#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		
		int i;
		cout <<"nhap i:";
		cin >> i;
		if( (i%10 == 6)&& ((int)i/10)%10 == 8){
			cout << "1" << endl;
		}
		else {
			cout << "0" << endl;
		}
	}
}
