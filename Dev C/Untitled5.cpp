#include <iostream>
#include <cmath>

using namespace std;

// �?nh nghia struct d? luu tr? t?a d? c?a m?t di?m
struct Point {
    double x;
    double y;
};

// H�m t�nh kho?ng c�ch gi?a hai di?m
double distance(const Point& A, const Point& B) {
    return sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
}

int main() {
    Point A, B;
    
    cout << "Nh?p t?a d? di?m A (x1, y1): ";
    cin >> A.x >> A.y;
    
    cout << "Nh?p t?a d? di?m B (x2, y2): ";
    cin >> B.x >> B.y;
    
    // T�nh kho?ng c�ch
    double result = distance(A, B);
    
    cout << "Kho?ng c�ch gi?a A v� B l�: " << result << endl;
    
    return 0;
}

