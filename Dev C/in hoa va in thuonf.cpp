#include<bits/stdc++.h>
using namespace std;

int main(){
	char c;
	cout << "nhap c:";
	cin >> c; 
    if(65<=c && 90>=c){
    	c += 32;
    	cout<< "chu in thuong la:" << c << endl;
	}
	else if(97 <= c && 122>= c){
	     c -= 32;
		 cout << "chu in hoa la:" << c << endl; 
	}
}
