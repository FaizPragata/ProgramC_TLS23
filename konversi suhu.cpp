#include <iostream>
using namespace std;

int main ()
{
  cout << "##  Program Konversi Suhu  ##" << endl;
  cout << "=============================" << endl;
  cout << endl;

  int pilihan;
  float c, k, f, r, Suhu_Awal;
  cout << "1. Celcius" << endl;
  cout << "2. Kelvin" << endl;
  cout << "3. Farenheit" << endl;
  cout << "4. Reamur" << endl;
  cout << endl;

  cout << "Input pilihan suhu awal (pilih 1-4): ";
  cin >> pilihan;
  while (pilihan < 1 || pilihan > 4) {
  cout << "Maaf, pilihan menu tidak tersedia. Silahkan coba lagi." << endl<<endl;
  cout << "Input pilihan suhu awal (pilih 1-4): ";
  cin >> pilihan;}
  
  cout << "Suhu awal: ";
  cin >> Suhu_Awal;


  switch (pilihan)
    {
    case 1:
      k = Suhu_Awal + 273;
      f = (Suhu_Awal * 1.8) + 32;
      r = Suhu_Awal * 0.8;
      cout << "\nHasil Celcius Ke Kelvin    : " << k <<" K";
      cout << "\nHasil Celcius Ke Fahrenheit: " << f <<"°F";
      cout << "\nHasil Celcius Ke Reamur    : " << r <<"°R";
      break;
    case 2:
      c = Suhu_Awal - 273;
      f = c * 1.8 + 32;
      r = c * 0.8;
      cout << "\nHasil Kelvin Ke Celcius   : " << c <<"°C";
      cout << "\nHasil Kelvin Ke Fahrenheit: " << f <<"°F";
      cout << "\nHasil Kelvin Ke Reamur    : " << r <<"°R";
      break;
    case 3:
      c = (Suhu_Awal - 32) / 1.8;
      k = c + 273;
      r = c * 0.8;
      cout << "\nHasil Farenheit Ke Celcius   : " << c <<"°C";
      cout << "\nHasil Farenheit Ke Kelvin    : " << k <<" K";
      cout << "\nHasil Farenheit Ke Reamur    : " << r <<"°R";
      break;
    case 4:
      c = Suhu_Awal * 1.25;
      k = c + 273;
      f = c * 0.8;
      cout << "\nHasil Reamur Ke Celcius   : " << c <<"°C";
      cout << "\nHasil Reamur Ke Kelvin    : " << k <<" K";
      cout << "\nHasil Reamur Ke Farenheit : " << f <<"°F";
    }
  cout << "\n";
  return 0;
}
