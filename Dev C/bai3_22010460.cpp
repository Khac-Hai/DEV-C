#include<iostream>
#include<vector>

int main() {
  std::vector<std::string> chuoi;

  while (1)
  {
    std::string chuoi_con_moi;
    std::cout << "Nhap 1 chuoi moi: ";
    std::cin >> chuoi_con_moi;

    if(chuoi_con_moi == "end") break;

    chuoi.push_back(chuoi_con_moi);
  }

  std::vector<std::string> chuoi_duy_nhat;

  for(int i = 0; i < chuoi.size(); i++) {
    int count = 0;

    for(int j = 0; j < chuoi_duy_nhat.size(); j++) {
      if(chuoi_duy_nhat[j] == chuoi[i]) {
        count++;
        break;
      }
    }

    if(count == 0) chuoi_duy_nhat.push_back(chuoi[i]);
  }

  for(int i = 0; i < chuoi_duy_nhat.size(); i++) {
    int count = 0;
    for(int j = 0; j < chuoi.size(); j++) {
      if(chuoi_duy_nhat[i] == chuoi[j]) count++;
    }
    std::cout << chuoi_duy_nhat[i] << " - " << "So lan xuat hien: " << count << std::endl;
  }
  
}
