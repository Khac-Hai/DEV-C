#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		int k;
		cin >> k; 
		int A[100]; 
		for(int i=0; i<n; i++){
			cin >> A[i];
		}
    int min = A[0];
    for (int i = 1; i < n; i++){
        if (min > A[i]){
		    min = A[i];
        }
    }
       
		cout << min << endl; 
   
	return 0;
}
}
