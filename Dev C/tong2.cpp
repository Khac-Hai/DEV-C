#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  float S;
  S = 0;
  do
  {
    cout<<"nhap n: ";
    cin>>n;
  }while(n < 1);
  
  for(int i = 1; i <= n; i++){
    S = S + 1.0 / i;
  }
  cout<<"Tong là: "<< S;
}
