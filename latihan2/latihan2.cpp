#include <iostream>
using namespace std;

float persegipanjang(float p, float l) {
	return p * l;
}

float lingkaran(float r) {
	return 3.14 * r * r;
}

float segitiga(float a, float t) {
	return 0.5 * a * t;
}

int main()
{
	float panjang, lebar, jejari, alas, tinggi;
	int pilihan;
	do {
		cout << "\n\n==============";
		cout << "\n\M E N U";
		cout << "\n===============";
		cout << "\n 1. Luas persegi panjang";
		cout << "\n 2. Luas lingkaran";
		cout << "\n 3. Luas segitiga";
		cout << "\n 4. keluar";
		cout << "\n Pilihan (1/2/3/4/) : ";
		cin >> pilihan;


		switch (pilihan)
		{
		case 1:
			cout << "Masukan Panjang = ";
			cin >> panjang;
			cout << "Masukan Lebar = ";
			cin >> lebar;
			cout << "\n Luas Persegi panjang = " << persegipanjang(panjang, lebar);
		case 2:
			cout << "Masukan jari-jari = ";
			cin >> jejari;
			cout << "\n Luas Lingkaran = " << lingkaran(jejari);
			break;
		case 3:
			cout << "Masukan alas = ";
			cin >> alas;
			cout << "Masukan Tinggi = ";
			cin >> tinggi;
			cout << "\n Luas segitiga = " << segitiga(alas, tinggi);
			break;
		case 4:
			break;
		default:
			cout << "Pilihan Salah!!";
			break;

		}
	} while (pilihan != 4);
}