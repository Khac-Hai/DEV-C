#include <iostream>
using namespace std;

const int coc = 10;

int tinhgiathue(int songay) {
    int giathue = 0;

    if (songay == 1 || songay == 2) {
        giathue = coc + songay * 30;
    } else if (songay >= 3 && songay <= 5) {
        giathue = coc+ songay * 25;
    } else if (songay >= 6 && songay <=10) {
        giathue = coc + songay * 20;
    }
    else if (songay >=10){
    	giathue =  coc + songay * 15;
	}

    return giathue;
}

int main() {
    int songay;

    cout << "Nhap so ngay thue: ";
    cin >> songay;

    while (songay <= 0) {
        cout << "So ngay thue khong hop le." << endl;
        cout << "Nhap lai so ngay thue: ";
        cin >> songay;
    }
    
    int giathue = tinhgiathue(songay);
    cout << "Gia thue la: " << giathue << " USD" << endl;

    return 0;
}
