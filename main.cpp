#include <iostream>
using namespace std;

int main(){
  int angka;
  string name;

  cout << "Masukan nama: ";
  cin >> name;
  cout << "Masukan nilai: ";
  cin >> angka;

  if (angka >= 85 && angka <= 100){
    cout << "A";
  } else if (angka >=70 && angka < 85){
    cout << "B";
  } else if (angka >= 60 && angka < 70){
    cout << "C";
  }else{
    cout << "D";
  }

  return 0;
}