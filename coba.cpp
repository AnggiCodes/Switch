#include <iostream>
#include <cmath>
using namespace std;

int main(){
  string nama;
  int jumlah, menu;
  float total, harga, total_semua = 0;
  char answer;

   cout << "Atas nama: ";
   cin >> nama;

  do{ 
    cout << "Pilih menu: \n";
    cout << "1. Bakso Urat\n";
    cout << "2. Mie Ayam\n";
    cout << "Pilih (1-2): ";
    cin >> menu;

    switch (menu){
    case 1: 
    cout << "Bakso Urat\n";
    cout << "Masukan Jumlah: ";
    cin >> jumlah;
    harga = 15500;
    total = jumlah * harga;
    total_semua += total;
    cout << total_semua;
    break;

    case 2:
    cout << "Mie Ayam\n";
    cout << "Masukan Jumlah: ";
    cin >> jumlah;
    harga = 12000;
    total = jumlah * harga;
    total_semua += total;
    cout << total_semua;
    break;

    default:
    cout << "Menu tidak tersedia";
    }

    cout << "\nApakah ingin nambah menu? (y/n): ";
    cin >> answer;
   
  } while (answer == 'Y' || answer == 'y');

  cout << "Total yang perlu dibayar Rp " << total_semua;

  return 0;

}