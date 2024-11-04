#include<bits/stdc++.h>

using namespace std;

struct Point{
	double x,y;
};

double khoangcach(const Point& A, const Point& B) {
    return sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		Point A,B;
		cin >> A.x >> A.y;
		cin >> B.x >> B.y;
		double ketqua = khoangcach(A,B);
		cout << fixed << setprecision(4) << ketqua;
		return 0;
	}
}
