#include<bits/stdc++.h>

using namespace std;

struct mathang{
	int id;
	string name,nhomhang;
	float mua,ban,loinhuan;
};
void scan(mathang ds[], int n){
	for(int i=0 ;i<n; i++){
		ds[i].id = i+1;
		cin.ignore();
		getline(cin, ds[i].name);
		getline(cin, ds[i].nhomhang);
		cin >> (cin, ds[i].mua);
		cin >> (cin, ds[i].ban);
		ds[i].loinhuan = ds[i].ban - ds[i].mua;
	}
}

void sapxep(mathang ds[], int n){		
	bool giam;
	do{
		giam = false;
		for(int i=1; i<n; i++){
			if(ds[i-1].loinhuan < ds[i].loinhuan){ 
				swap(ds[i-1], ds[i]); 
				giam = true; 
			}
		}
	}while(giam);
}
	


void print(mathang ds[], int n){
	for(int i=0; i<n; i++){
		cout << ds[i].id << " ";
		cout << ds[i].name << " ";
		cout << ds[i].nhomhang << " ";
		cout << ds[i].loinhuan << " " << endl;
	}
}
int main(){
	int n; 
	cin >> n;
	cin.ignore();
	struct mathang ds[n];
	scan(ds,n);
	sapxep(ds,n);
	print(ds,n);
	return 0;
}
