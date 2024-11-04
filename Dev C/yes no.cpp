#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		
		int i;
		cout <<"nhap i:";
		cin >> i;
		int a = 0;
		while (i>0){
			int chuso;
			chuso = i%10;
			i/=10;
			
			if (chuso != 0 && chuso != 6 && chuso != 8){
				a++; 
			}
		}
		if(a == 0){
			cout << "yes" << endl;
			
		}
		else {
			cout << "no" << endl;
		}
	}
}
