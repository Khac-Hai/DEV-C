#include <iostream>
using namespace std;

void nhapgia(double gia[], string sanpham[]) {
    for(int i = 0; i < 4; i++) {
        cout << "Nhap gia cua " << sanpham[i] << ": ";
        cin >> gia[i];
    }
}

void timgiacaonhat(double gia[], string sanpham[], double &maxgia, string &maxsanpham) {
    maxgia = gia[0];
    maxsanpham = sanpham[0];

    for(int i = 1; i < 4; i++) {
        maxgia = (gia[i] > maxgia) ? gia[i] : maxgia;
        maxsanpham = (gia[i] > maxgia) ? sanpham[i] : maxsanpham;
    }
}

void hienthigiacaonhat(double maxgia, string maxsanpham) {
    cout << "San pham co gia cao nhat la " << maxsanpham << " voi gia " << maxgia << endl;
}

int main() {
	
    string sanpham[4] = {"sanpham 1", "sanpham 2", "sanpham 3", "sanpham 4"};
    double gia[4];
    double maxgia;
    string maxsanpham;

    nhapgia(gia,sanpham);
    timgiacaonhat(gia, sanpham, maxgia, maxsanpham);
    hienthigiacaonhat(maxgia, maxsanpham);

    return 0;
}
