#include<bits/stdc++.h>
using namespace std;

int tong(int n){
	if( n == 1)
	return 1;
	return tong(n - 1) + n;
}
int main(){
	int a;
	while(a <= 0){
		cout <<"nhap a:";
		cin >> a;
	}
	cout <<"tong cua day so la:" << tong(a) << endl;
	return 0;
}
	
