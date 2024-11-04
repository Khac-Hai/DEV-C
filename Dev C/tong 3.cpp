#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,S,P;
  P = 1;
  S = 0;
  do
  {
    cout<<"nhap n: ";
    cin>>n;
  }while(n < 1);
  
  for(int i = 1; i <= n; i++){
    P = P * i;
	S = S + P;
  }
  cout<<"Tong là: "<< S;
}
